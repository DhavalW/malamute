/*  =========================================================================
    malamute - generated layer of public API

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of the Malamute Project.                         
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef MLM_LIBRARY_H_INCLUDED
#define MLM_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>

//  MLM version macros for compile-time API detection

#define MLM_VERSION_MAJOR 1
#define MLM_VERSION_MINOR 0
#define MLM_VERSION_PATCH 0

#define MLM_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define MLM_VERSION \
    MLM_MAKE_VERSION(MLM_VERSION_MAJOR, MLM_VERSION_MINOR, MLM_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBMLM_STATIC
#       define MLM_EXPORT
#   elif defined LIBMLM_EXPORTS
#       define MLM_EXPORT __declspec(dllexport)
#   else
#       define MLM_EXPORT __declspec(dllimport)
#   endif
#else
#   define MLM_EXPORT
#endif

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built stable releases
#ifdef MLM_BUILD_DRAFT_API
typedef struct _mlm_proto_t mlm_proto_t;
#define MLM_PROTO_T_DEFINED
typedef struct _mlm_server_t mlm_server_t;
#define MLM_SERVER_T_DEFINED
typedef struct _mlm_client_t mlm_client_t;
#define MLM_CLIENT_T_DEFINED
#endif // MLM_BUILD_DRAFT_API


//  Public classes, each with its own header file
#ifdef MLM_BUILD_DRAFT_API
#include "mlm_proto.h"
#include "mlm_server.h"
#include "mlm_client.h"
#endif // MLM_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
