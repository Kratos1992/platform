/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is
 * Mozilla Foundation
 * Portions created by the Initial Developer are Copyright (C) 2006
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *   Jonas Sicking <jonas@sicking.cc> (Original author)
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#ifndef nsIFileControlElement_h___
#define nsIFileControlElement_h___

#include "nsISupports.h"
class nsAString;

// IID for the nsIFileControl interface
#define NS_IFILECONTROLELEMENT_IID \
{ 0x848145e7, 0x3f73, 0x4889, \
 { 0xbf, 0x4d, 0x72, 0x52, 0xa5, 0x98, 0x14, 0xfa } }

/**
 * This interface is used for the file control frame to store its value away
 * into the content.
 */
class nsIFileControlElement : public nsISupports {
public:

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IFILECONTROLELEMENT_IID)

  /**
   * Gets filename to be uploaded when this control is submitted
   */
  virtual void GetFileName(nsAString& aFileName) = 0;

  /**
   * Sets filename to be uploaded when this control is submitted
   */
  virtual void SetFileName(const nsAString& aFileName,
                           PRBool aUpdateFrame) = 0;
};

#endif // nsIFileControlElement_h___
