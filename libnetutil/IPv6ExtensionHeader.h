/***************************************************************************
 * IPv6ExtensionHeader.h -- The IPv6ExtensionHeader class represents       *
 * a generic class for IPv6 extension headers. Specific headers (like      *
 * Hop-by-Hop or Routing) inherit from this class.                         *
 ***********************IMPORTANT NMAP LICENSE TERMS************************
 *
 * The Nmap Security Scanner is (C) 1996-2025 Nmap Software LLC ("The Nmap
 * Project"). Nmap is also a registered trademark of the Nmap Project.
 *
 * This program is distributed under the terms of the Nmap Public Source
 * License (NPSL). The exact license text applying to a particular Nmap
 * release or source code control revision is contained in the LICENSE
 * file distributed with that version of Nmap or source code control
 * revision. More Nmap copyright/legal information is available from
 * https://nmap.org/book/man-legal.html, and further information on the
 * NPSL license itself can be found at https://nmap.org/npsl/ . This
 * header summarizes some key points from the Nmap license, but is no
 * substitute for the actual license text.
 *
 * Nmap is generally free for end users to download and use themselves,
 * including commercial use. It is available from https://nmap.org.
 *
 * The Nmap license generally prohibits companies from using and
 * redistributing Nmap in commercial products, but we sell a special Nmap
 * OEM Edition with a more permissive license and special features for
 * this purpose. See https://nmap.org/oem/
 *
 * If you have received a written Nmap license agreement or contract
 * stating terms other than these (such as an Nmap OEM license), you may
 * choose to use and redistribute Nmap under those terms instead.
 *
 * The official Nmap Windows builds include the Npcap software
 * (https://npcap.com) for packet capture and transmission. It is under
 * separate license terms which forbid redistribution without special
 * permission. So the official Nmap Windows builds may not be redistributed
 * without special permission (such as an Nmap OEM license).
 *
 * Source is provided to this software because we believe users have a
 * right to know exactly what a program is going to do before they run it.
 * This also allows you to audit the software for security holes.
 *
 * Source code also allows you to port Nmap to new platforms, fix bugs, and
 * add new features. You are highly encouraged to submit your changes as a
 * Github PR or by email to the dev@nmap.org mailing list for possible
 * incorporation into the main distribution. Unless you specify otherwise, it
 * is understood that you are offering us very broad rights to use your
 * submissions as described in the Nmap Public Source License Contributor
 * Agreement. This is important because we fund the project by selling licenses
 * with various terms, and also because the inability to relicense code has
 * caused devastating problems for other Free Software projects (such as KDE
 * and NASM).
 *
 * The free version of Nmap is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. Warranties,
 * indemnification and commercial support are all available through the
 * Npcap OEM program--see https://nmap.org/oem/
 *
 ***************************************************************************/
/* This code was originally part of the Nping tool.                        */

#ifndef __IPv6_EXTENSION_HEADER_H__
#define __IPv6_EXTENSION_HEADER_H__ 1

#include "PacketElement.h"

/* Extension header option codes */
#define EXTOPT_PAD1        0x00   /* Pad1 (RFC 2460)                          */
#define EXTOPT_PADN        0x01   /* PadN (RFC 2460)                          */
#define EXTOPT_JUMBO       0xC2   /* Jumbo Payload (RFC 2675)                 */
#define EXTOPT_TUNENCAPLIM 0x04   /* Tunnel Encapsulation Limit (RFC 2473)    */
#define EXTOPT_ROUTERALERT 0x05   /* Router Alert (RFC 2711)                  */
#define EXTOPT_QUICKSTART  0x26   /* Quick-Start (RFC 4782)                   */
#define EXTOPT_CALIPSO     0x07   /* CALIPSO (RFC 5570)                       */
#define EXTOPT_HOMEADDR    0xC9   /* Home Address (RFC 6275)                  */

class IPv6ExtensionHeader : public PacketElement {

};

#endif

