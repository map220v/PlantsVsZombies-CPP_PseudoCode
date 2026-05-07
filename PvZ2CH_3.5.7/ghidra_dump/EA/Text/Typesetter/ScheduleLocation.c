// Class: EA::Text::Typesetter::ScheduleLocation


/* EA::Text::Typesetter::ScheduleLocation::TEMPNAMEPLACEHOLDERVALUE(EA::Text::Typesetter::ScheduleLocation
   const&) */

bool __thiscall
EA::Text::Typesetter::ScheduleLocation::operator==(ScheduleLocation *this,ScheduleLocation *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(long *)this == *(long *)param_1) && (*(long *)(this + 8) == *(long *)(param_1 + 8))) {
    bVar1 = *(long *)(this + 0x10) == *(long *)(param_1 + 0x10);
  }
  return bVar1;
}


/* EA::Text::Typesetter::ScheduleLocation::GetCharIndex() const */

long __thiscall EA::Text::Typesetter::ScheduleLocation::GetCharIndex(ScheduleLocation *this)

{
  return *(long *)(this + 0x10) + *(long *)(this + 8);
}

