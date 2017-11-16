/*
 * homeCloud_Utils.h
 *
 *  Created on: Feb 29, 2016
 *      Author: hesham
 */

#ifndef HOMECLOUD_UTILS_H_
#define HOMECLOUD_UTILS_H_


/*MACROS*/
#define CONF (*ConfigurationDictionary::getInstance())
#define PRNT_LOG(logmsg) cout << "[" << fname << "] - " << logmsg << endl;
#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

#endif /* HOMECLOUD_UTILS_H_ */
