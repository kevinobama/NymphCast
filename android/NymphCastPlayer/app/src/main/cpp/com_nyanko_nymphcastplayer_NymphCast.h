/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nyanko_nymphcastplayer_NymphCast */

#ifndef _Included_com_nyanko_nymphcastplayer_NymphCast
#define _Included_com_nyanko_nymphcastplayer_NymphCast
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		NymphCast
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_NymphCast
	(JNIEnv *, jobject);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		setClientId
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_setClientId
	(JNIEnv *, jobject, jstring);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		getApplicationList
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_getApplicationList
	(JNIEnv *, jobject);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		sendApplicationMessage
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_sendApplicationMessage
	(JNIEnv *, jobject, jstring, jstring);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		findServers
 * Signature: ()V;
 */
JNIEXPORT void JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_findServers
	(JNIEnv *, jobject);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		connectServer
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_connectServer
	(JNIEnv *, jobject, jlong);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		disconnectServer
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_disconnectServer
	(JNIEnv *, jobject, jlong);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		castFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_castFile
	(JNIEnv *, jobject, jstring);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		castUrl
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_castUrl
	(JNIEnv *, jobject, jstring);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		playbackStart
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_playbackStart
	(JNIEnv *, jobject);

/*
 * Class:		com_nyanko_nymphcastplayer_NymphCast
 * Method:		playbackStop
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_nyanko_nymphcastplayer_NymphCast_playbackStop
	(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
