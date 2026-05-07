// Class: ObjectTypeDirectoryIterator<PlantType>


/* ObjectTypeDirectoryIterator<PlantType>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
ObjectTypeDirectoryIterator<PlantType>::operator++(ObjectTypeDirectoryIterator<PlantType> *this)

{
  *(int *)this = *(int *)this + 1;
  return;
}


/* ObjectTypeDirectoryIterator<PlantType>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
ObjectTypeDirectoryIterator<PlantType>::operator*(ObjectTypeDirectoryIterator<PlantType> *this)

{
  uint uVar1;
  
  uVar1 = Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstance();
  ObjectTypeDirectory<PlantType>::GetTypeFromIndex(uVar1);
  return;
}


/* ObjectTypeDirectoryIterator<PlantType>::operator bool() const */

bool __thiscall
ObjectTypeDirectoryIterator::operator_cast_to_bool(ObjectTypeDirectoryIterator *this)

{
  int iVar1;
  int iVar2;
  ObjectTypeDirectory<PlantType> *this_00;
  
  iVar1 = *(int *)this;
  this_00 = (ObjectTypeDirectory<PlantType> *)
            Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstance();
  iVar2 = ObjectTypeDirectory<PlantType>::GetCount(this_00);
  return iVar1 < iVar2;
}


/* ObjectTypeDirectoryIterator<ZombieType>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
ObjectTypeDirectoryIterator<ZombieType>::operator*(ObjectTypeDirectoryIterator<ZombieType> *this)

{
  uint uVar1;
  
  uVar1 = Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstance();
  ObjectTypeDirectory<ZombieType>::GetTypeFromIndex(uVar1);
  return;
}


/* ObjectTypeDirectoryIterator<ZombieType>::operator bool() const */

bool __thiscall
ObjectTypeDirectoryIterator::operator_cast_to_bool(ObjectTypeDirectoryIterator *this)

{
  int iVar1;
  int iVar2;
  ObjectTypeDirectory<ZombieType> *this_00;
  
  iVar1 = *(int *)this;
  this_00 = (ObjectTypeDirectory<ZombieType> *)
            Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstance();
  iVar2 = ObjectTypeDirectory<ZombieType>::GetCount(this_00);
  return iVar1 < iVar2;
}


/* ObjectTypeDirectoryIterator<CreatureType>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
ObjectTypeDirectoryIterator<CreatureType>::operator*
          (ObjectTypeDirectoryIterator<CreatureType> *this)

{
  uint uVar1;
  
  uVar1 = Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstance();
  ObjectTypeDirectory<CreatureType>::GetTypeFromIndex(uVar1);
  return;
}


/* ObjectTypeDirectoryIterator<CreatureType>::operator bool() const */

bool __thiscall
ObjectTypeDirectoryIterator::operator_cast_to_bool(ObjectTypeDirectoryIterator *this)

{
  int iVar1;
  int iVar2;
  ObjectTypeDirectory<CreatureType> *this_00;
  
  iVar1 = *(int *)this;
  this_00 = (ObjectTypeDirectory<CreatureType> *)
            Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstance();
  iVar2 = ObjectTypeDirectory<CreatureType>::GetCount(this_00);
  return iVar1 < iVar2;
}

