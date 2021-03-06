/* -*- Mode: C++; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/*
 *     Copyright 2010 Couchbase, Inc
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#ifndef _FILEMGR_ANOMALOUS_OPS
#define _FILEMGR_ANOMALOUS_OPS

#ifdef __cplusplus
extern "C" {
#endif

struct filemgr_ops * get_filemgr_ops();
void filemgr_ops_set_anomalous(int behavior);
void filemgr_ops_anomalous_init();
void filemgr_anomalous_writes_set(int behavior);

#ifdef __cplusplus
}
#endif

#endif
