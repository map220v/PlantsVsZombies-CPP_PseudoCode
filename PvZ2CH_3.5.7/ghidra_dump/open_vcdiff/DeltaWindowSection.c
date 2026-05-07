// Class: open_vcdiff::DeltaWindowSection


/* open_vcdiff::DeltaWindowSection::DeltaWindowSection() */

void __thiscall open_vcdiff::DeltaWindowSection::DeltaWindowSection(DeltaWindowSection *this)

{
  *(undefined8 *)this = 0;
  this[8] = (DeltaWindowSection)0x1;
  return;
}


/* open_vcdiff::DeltaWindowSection::Invalidate() */

void __thiscall open_vcdiff::DeltaWindowSection::Invalidate(DeltaWindowSection *this)

{
  FUN_05334ce0(this,this[8]);
  return;
}


/* open_vcdiff::DeltaWindowSection::Init(char const*, unsigned long) */

void __thiscall
open_vcdiff::DeltaWindowSection::Init(DeltaWindowSection *this,char *param_1,ulong param_2)

{
  ParseableChunk *this_00;
  
  if ((this[8] != (DeltaWindowSection)0x0) && (*(ParseableChunk **)this != (ParseableChunk *)0x0)) {
    ParseableChunk::SetDataBuffer(*(ParseableChunk **)this,param_1,param_2);
    return;
  }
  this_00 = ::operator_new(0x18);
  ParseableChunk::ParseableChunk(this_00,param_1,param_2);
  *(ParseableChunk **)this = this_00;
  this[8] = (DeltaWindowSection)0x1;
  return;
}

