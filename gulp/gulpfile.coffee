'use strict'

gulp   = require 'gulp'
gulpif = require 'gulp-if'
uglify = require 'gulp-uglify'
coffee = require 'gulp-coffee'
gutil  = require 'gulp-util'

DEV  = 'dev'
PROD = 'prod'

FOLDERS = 
    DEV: './src/'
    PROD: './public/'

SRC_PATHS = 
    JS: './js/'
    COFFEE: './coffee/'


minimist = require 'minimist'

knownOptions =
    string: 'env'
    default: 
        env: process.env.NODE_ENV || PROD

options = minimist (process.argv.slice 2), knownOptions

gulp.task 'scripts', () -> 
    gulp.src "#{FOLDERS.DEV}#{SRC_PATHS.COFFEE}*.coffee"
    .pipe (coffee { bare: true })
    .on 'error', gutil.log
    .pipe gulp.dest "#{FOLDERS.DEV}#{SRC_PATHS.JS}"

    gulp.src "#{FOLDERS.DEV}#{SRC_PATHS.JS}*.js"
    .pipe (gulpif options.env is PROD, do uglify)
    .pipe gulp.dest "#{FOLDERS.PROD}#{SRC_PATHS.JS}"

gulp.task 'default', ['scripts']

# gulp scripts --env development