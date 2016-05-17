//
// OID2.cxx
//
// Code automatically generated by asnparse.
//

#ifdef P_USE_PRAGMA
#pragma implementation "OID2.h"
#endif

#include <ptlib.h>
#include "h230/OID2.h"

#define new PNEW


#if ! H323_DISABLE_H230OID2

//
// Participant
//

H230OID2_Participant::H230OID2_Participant(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 2, TRUE, 0)
{
  m_token.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
  m_number.SetConstraints(PASN_Object::FixedConstraint, 1, 256);
  m_name.SetConstraints(PASN_Object::FixedConstraint, 1, 256);
}


#ifndef PASN_NOPRINTON
void H230OID2_Participant::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+8) << "token = " << setprecision(indent) << m_token << '\n';
  strm << setw(indent+9) << "number = " << setprecision(indent) << m_number << '\n';
  if (HasOptionalField(e_name))
    strm << setw(indent+7) << "name = " << setprecision(indent) << m_name << '\n';
  if (HasOptionalField(e_vCard))
    strm << setw(indent+8) << "vCard = " << setprecision(indent) << m_vCard << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H230OID2_Participant::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H230OID2_Participant), PInvalidCast);
#endif
  const H230OID2_Participant & other = (const H230OID2_Participant &)obj;

  Comparison result;

  if ((result = m_token.Compare(other.m_token)) != EqualTo)
    return result;
  if ((result = m_number.Compare(other.m_number)) != EqualTo)
    return result;
  if ((result = m_name.Compare(other.m_name)) != EqualTo)
    return result;
  if ((result = m_vCard.Compare(other.m_vCard)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H230OID2_Participant::GetDataLength() const
{
  PINDEX length = 0;
  length += m_token.GetObjectLength();
  length += m_number.GetObjectLength();
  if (HasOptionalField(e_name))
    length += m_name.GetObjectLength();
  if (HasOptionalField(e_vCard))
    length += m_vCard.GetObjectLength();
  return length;
}


PBoolean H230OID2_Participant::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_token.Decode(strm))
    return FALSE;
  if (!m_number.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_name) && !m_name.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_vCard) && !m_vCard.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H230OID2_Participant::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_token.Encode(strm);
  m_number.Encode(strm);
  if (HasOptionalField(e_name))
    m_name.Encode(strm);
  if (HasOptionalField(e_vCard))
    m_vCard.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H230OID2_Participant::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H230OID2_Participant::Class()), PInvalidCast);
#endif
  return new H230OID2_Participant(*this);
}


//
// ArrayOf_Participant
//

H230OID2_ArrayOf_Participant::H230OID2_ArrayOf_Participant(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Array(tag, tagClass)
{
}


PASN_Object * H230OID2_ArrayOf_Participant::CreateObject() const
{
  return new H230OID2_Participant;
}


H230OID2_Participant & H230OID2_ArrayOf_Participant::operator[](PINDEX i) const
{
  return (H230OID2_Participant &)array[i];
}


PObject * H230OID2_ArrayOf_Participant::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H230OID2_ArrayOf_Participant::Class()), PInvalidCast);
#endif
  return new H230OID2_ArrayOf_Participant(*this);
}


//
// ParticipantList
//

H230OID2_ParticipantList::H230OID2_ParticipantList(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 0, TRUE, 0)
{
  m_list.SetConstraints(PASN_Object::FixedConstraint, 0, 65535);
}


#ifndef PASN_NOPRINTON
void H230OID2_ParticipantList::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+7) << "list = " << setprecision(indent) << m_list << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H230OID2_ParticipantList::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H230OID2_ParticipantList), PInvalidCast);
#endif
  const H230OID2_ParticipantList & other = (const H230OID2_ParticipantList &)obj;

  Comparison result;

  if ((result = m_list.Compare(other.m_list)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H230OID2_ParticipantList::GetDataLength() const
{
  PINDEX length = 0;
  length += m_list.GetObjectLength();
  return length;
}


PBoolean H230OID2_ParticipantList::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_list.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H230OID2_ParticipantList::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_list.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H230OID2_ParticipantList::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H230OID2_ParticipantList::Class()), PInvalidCast);
#endif
  return new H230OID2_ParticipantList(*this);
}


#endif // if ! H323_DISABLE_H230OID2


// End of OID2.cxx
