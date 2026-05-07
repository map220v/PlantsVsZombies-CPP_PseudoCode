// Class: UUIDCreator


/* UUIDCreator::Create() */

undefined8 UUIDCreator::Create(void)

{
  Util *in_x0;
  undefined8 in_x8;
  
  Android::Util::GetUUIDString(in_x0);
  return in_x8;
}


/* UUIDCreator::UUIDCreator() */

void __thiscall UUIDCreator::UUIDCreator(UUIDCreator *this)

{
  *(undefined ***)this = &PTR_Create_06608590;
  return;
}

