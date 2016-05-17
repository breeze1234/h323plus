//
// H46015.h
//
// Code automatically generated by asnparse.
//

#if ! H323_DISABLE_H46015

#ifndef __H46015_H
#define __H46015_H

#ifdef P_USE_PRAGMA
#pragma interface
#endif

#include <ptclib/asner.h>

#include "h225.h"


//
// ChannelSuspendConfirm
//

class H46015_ChannelSuspendConfirm : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46015_ChannelSuspendConfirm, PASN_Sequence);
#endif
  public:
    H46015_ChannelSuspendConfirm(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);


    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    PObject * Clone() const;
};


//
// ChannelSuspendCancel
//

class H46015_ChannelSuspendCancel : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46015_ChannelSuspendCancel, PASN_Sequence);
#endif
  public:
    H46015_ChannelSuspendCancel(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);


    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    PObject * Clone() const;
};


//
// ChannelResumeRequest
//

class H46015_ChannelResumeRequest : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46015_ChannelResumeRequest, PASN_Sequence);
#endif
  public:
    H46015_ChannelResumeRequest(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_resetH245
    };

    PASN_Integer m_randomNumber;
    PASN_Null m_resetH245;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// ChannelResumeResponse
//

class H46015_ChannelResumeResponse : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46015_ChannelResumeResponse, PASN_Sequence);
#endif
  public:
    H46015_ChannelResumeResponse(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);


    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    PObject * Clone() const;
};


//
// SignallingChannelData_signallingChannelData
//

class H46015_ChannelSuspendRequest;
class H46015_ChannelSuspendResponse;
class H46015_ChannelSuspendConfirm;
class H46015_ChannelSuspendCancel;
class H46015_ChannelResumeRequest;
class H46015_ChannelResumeResponse;

class H46015_SignallingChannelData_signallingChannelData : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46015_SignallingChannelData_signallingChannelData, PASN_Choice);
#endif
  public:
    H46015_SignallingChannelData_signallingChannelData(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_channelSuspendRequest,
      e_channelSuspendResponse,
      e_channelSuspendConfirm,
      e_channelSuspendCancel,
      e_channelResumeRequest,
      e_channelResumeResponse
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H46015_ChannelSuspendRequest &() const;
#else
    operator H46015_ChannelSuspendRequest &();
    operator const H46015_ChannelSuspendRequest &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H46015_ChannelSuspendResponse &() const;
#else
    operator H46015_ChannelSuspendResponse &();
    operator const H46015_ChannelSuspendResponse &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H46015_ChannelSuspendConfirm &() const;
#else
    operator H46015_ChannelSuspendConfirm &();
    operator const H46015_ChannelSuspendConfirm &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H46015_ChannelSuspendCancel &() const;
#else
    operator H46015_ChannelSuspendCancel &();
    operator const H46015_ChannelSuspendCancel &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H46015_ChannelResumeRequest &() const;
#else
    operator H46015_ChannelResumeRequest &();
    operator const H46015_ChannelResumeRequest &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H46015_ChannelResumeResponse &() const;
#else
    operator H46015_ChannelResumeResponse &();
    operator const H46015_ChannelResumeResponse &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// ArrayOf_TransportAddress
//

class H225_TransportAddress;

class H46015_ArrayOf_TransportAddress : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46015_ArrayOf_TransportAddress, PASN_Array);
#endif
  public:
    H46015_ArrayOf_TransportAddress(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H225_TransportAddress & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// SignallingChannelData
//

class H46015_SignallingChannelData : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46015_SignallingChannelData, PASN_Sequence);
#endif
  public:
    H46015_SignallingChannelData(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H46015_SignallingChannelData_signallingChannelData m_signallingChannelData;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// ChannelSuspendRequest
//

class H46015_ChannelSuspendRequest : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46015_ChannelSuspendRequest, PASN_Sequence);
#endif
  public:
    H46015_ChannelSuspendRequest(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_resetH245
    };

    H46015_ArrayOf_TransportAddress m_channelResumeAddress;
    PASN_Boolean m_immediateResume;
    PASN_Null m_resetH245;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// ChannelSuspendResponse
//

class H46015_ChannelSuspendResponse : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H46015_ChannelSuspendResponse, PASN_Sequence);
#endif
  public:
    H46015_ChannelSuspendResponse(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Boolean m_okToSuspend;
    H46015_ArrayOf_TransportAddress m_channelResumeAddress;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


#endif // __H46015_H

#endif // if ! H323_DISABLE_H46015


// End of H46015.h
