#ifndef HEADER_CURL_OAUTH2_H
#define HEADER_CURL_OAUTH2_H
/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at http://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif

enum curl_oauth2_token_type {
  CURL_OAUTH2_TOKEN_TYPE_INVALID = 0,
  CURL_OAUTH2_TOKEN_TYPE_BEARER,
  CURL_OAUTH2_TOKEN_TYPE_MAC
};

enum curl_oauth2_mac_algo {
  CURL_OAUTH2_MAC_ALGO_INVALID = 0,
  CURL_OAUTH2_MAC_ALGO_HMAC_SHA1,
  CURL_OAUTH2_MAC_ALGO_HMAC_SHA256
};

struct curl_oauth2_token {
  enum curl_oauth2_token_type token_type;
  const char *access_token;
  struct curl_oauth2_mac_token {    /* For HTTP MAC tokens only. */
    const char *mac_key;
    enum curl_oauth2_mac_algo mac_algo;
  } mac_token;
};

#ifdef  __cplusplus
}
#endif

#endif /* HEADER_CURL_OAUTH2_H */
