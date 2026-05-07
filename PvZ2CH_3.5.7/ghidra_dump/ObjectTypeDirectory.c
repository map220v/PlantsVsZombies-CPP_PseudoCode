// Class: ObjectTypeDirectory<PlantType>


/* ObjectTypeDirectory<PlantType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PlantType>::ObjectTypeDirectory(ObjectTypeDirectory<PlantType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PlantType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06608430;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PlantType>)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ObjectTypeDirectory<PlantType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PlantType>::~ObjectTypeDirectory(ObjectTypeDirectory<PlantType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06608430;
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PlantType>> *)this);
  return;
}


/* ObjectTypeDirectory<PlantType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PlantType>::~ObjectTypeDirectory(ObjectTypeDirectory<PlantType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<CollectableType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CollectableType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<CollectableType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CollectableType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ObjectTypeDirectory<ZombieType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<ZombieType>::ObjectTypeDirectory(ObjectTypeDirectory<ZombieType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<ZombieType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660fea0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<ZombieType>)0x0;
  return;
}


/* ObjectTypeDirectory<GridItemType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<GridItemType>::ObjectTypeDirectory(ObjectTypeDirectory<GridItemType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<GridItemType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660fee0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<GridItemType>)0x0;
  return;
}


/* ObjectTypeDirectory<PowerPropertySheet>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PowerPropertySheet>::ObjectTypeDirectory
          (ObjectTypeDirectory<PowerPropertySheet> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PowerPropertySheet>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660fe60;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PowerPropertySheet>)0x0;
  return;
}


/* ObjectTypeDirectory<CreatureType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<CreatureType>::ObjectTypeDirectory(ObjectTypeDirectory<CreatureType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<CreatureType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660ff20;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<CreatureType>)0x0;
  return;
}


/* ObjectTypeDirectory<EffectObjectType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<EffectObjectType>::ObjectTypeDirectory
          (ObjectTypeDirectory<EffectObjectType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<EffectObjectType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660ff60;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<EffectObjectType>)0x0;
  return;
}


/* ObjectTypeDirectory<CollectableType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<CollectableType>::ObjectTypeDirectory
          (ObjectTypeDirectory<CollectableType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<CollectableType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660ffa0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<CollectableType>)0x0;
  return;
}


/* ObjectTypeDirectory<PresentType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PresentType>::ObjectTypeDirectory(ObjectTypeDirectory<PresentType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PresentType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610020;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PresentType>)0x0;
  return;
}


/* ObjectTypeDirectory<PresentTable>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PresentTable>::ObjectTypeDirectory(ObjectTypeDirectory<PresentTable> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<PresentTable>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PresentTable>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660ffe0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PresentTable>)0x0;
  return;
}


/* ObjectTypeDirectory<PowerupType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PowerupType>::ObjectTypeDirectory(ObjectTypeDirectory<PowerupType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PowerupType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610060;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PowerupType>)0x0;
  return;
}


/* ObjectTypeDirectory<GameFeatureType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<GameFeatureType>::ObjectTypeDirectory
          (ObjectTypeDirectory<GameFeatureType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<GameFeatureType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066100a0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<GameFeatureType>)0x0;
  return;
}


/* ObjectTypeDirectory<ToolPacketProps>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<ToolPacketProps>::ObjectTypeDirectory
          (ObjectTypeDirectory<ToolPacketProps> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<ToolPacketProps>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066102e0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<ToolPacketProps>)0x0;
  return;
}


/* ObjectTypeDirectory<TrainingType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<TrainingType>::ObjectTypeDirectory(ObjectTypeDirectory<TrainingType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<TrainingType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610320;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<TrainingType>)0x0;
  return;
}


/* ObjectTypeDirectory<HotUIColor>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<HotUIColor>::ObjectTypeDirectory(ObjectTypeDirectory<HotUIColor> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<HotUIColor>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610120;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<HotUIColor>)0x0;
  return;
}


/* ObjectTypeDirectory<HotUIColorAlias>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<HotUIColorAlias>::ObjectTypeDirectory
          (ObjectTypeDirectory<HotUIColorAlias> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<HotUIColorAlias>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610160;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<HotUIColorAlias>)0x0;
  return;
}


/* ObjectTypeDirectory<LevelScoringRules>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<LevelScoringRules>::ObjectTypeDirectory
          (ObjectTypeDirectory<LevelScoringRules> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<LevelScoringRules>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066101a0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<LevelScoringRules>)0x0;
  return;
}


/* ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::ObjectTypeDirectory
          (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066100e0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>)0x0;
  return;
}


/* ObjectTypeDirectory<BonusType>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<BonusType>::ObjectTypeDirectory(ObjectTypeDirectory<BonusType> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<BonusType>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<BonusType>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066101e0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<BonusType>)0x0;
  return;
}


/* ObjectTypeDirectory<PlantType>::Clear() */

void __thiscall ObjectTypeDirectory<PlantType>::Clear(ObjectTypeDirectory<PlantType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
           *)(this + 8));
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  clear((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>> *
        )(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PlantType>)0x0;
  return;
}


/* ObjectTypeDirectory<PowerPropertySheet>::Clear() */

void __thiscall
ObjectTypeDirectory<PowerPropertySheet>::Clear(ObjectTypeDirectory<PowerPropertySheet> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<PowerPropertySheet_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerPropertySheet_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<PowerPropertySheet_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerPropertySheet_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<PowerPropertySheet_const>,std::allocator<Sexy::RtWeakPtr<PowerPropertySheet_const>>>
  ::clear((vector<Sexy::RtWeakPtr<PowerPropertySheet_const>,std::allocator<Sexy::RtWeakPtr<PowerPropertySheet_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PowerPropertySheet>)0x0;
  return;
}


/* ObjectTypeDirectory<PowerPropertySheet>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PowerPropertySheet>::~ObjectTypeDirectory
          (ObjectTypeDirectory<PowerPropertySheet> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660fe60;
  std::
  vector<Sexy::RtWeakPtr<PowerPropertySheet_const>,std::allocator<Sexy::RtWeakPtr<PowerPropertySheet_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<PowerPropertySheet_const>,std::allocator<Sexy::RtWeakPtr<PowerPropertySheet_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<PowerPropertySheet_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerPropertySheet_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<PowerPropertySheet_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerPropertySheet_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PowerPropertySheet>> *)this);
  return;
}


/* ObjectTypeDirectory<PowerPropertySheet>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PowerPropertySheet>::~ObjectTypeDirectory
          (ObjectTypeDirectory<PowerPropertySheet> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<ZombieType>::Clear() */

void __thiscall ObjectTypeDirectory<ZombieType>::Clear(ObjectTypeDirectory<ZombieType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
           *)(this + 8));
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  clear((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
         *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<ZombieType>)0x0;
  return;
}


/* ObjectTypeDirectory<ZombieType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<ZombieType>::~ObjectTypeDirectory(ObjectTypeDirectory<ZombieType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660fea0;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<ZombieType>> *)this);
  return;
}


/* ObjectTypeDirectory<ZombieType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<ZombieType>::~ObjectTypeDirectory(ObjectTypeDirectory<ZombieType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<CreatureType>::Clear() */

void __thiscall ObjectTypeDirectory<CreatureType>::Clear(ObjectTypeDirectory<CreatureType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<CreatureType_const>,std::allocator<Sexy::RtWeakPtr<CreatureType_const>>>::
  clear((vector<Sexy::RtWeakPtr<CreatureType_const>,std::allocator<Sexy::RtWeakPtr<CreatureType_const>>>
         *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<CreatureType>)0x0;
  return;
}


/* ObjectTypeDirectory<CreatureType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<CreatureType>::~ObjectTypeDirectory(ObjectTypeDirectory<CreatureType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660ff20;
  std::
  vector<Sexy::RtWeakPtr<CreatureType_const>,std::allocator<Sexy::RtWeakPtr<CreatureType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<CreatureType_const>,std::allocator<Sexy::RtWeakPtr<CreatureType_const>>>
           *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<CreatureType>> *)this);
  return;
}


/* ObjectTypeDirectory<CreatureType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<CreatureType>::~ObjectTypeDirectory(ObjectTypeDirectory<CreatureType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<GridItemType>::Clear() */

void __thiscall ObjectTypeDirectory<GridItemType>::Clear(ObjectTypeDirectory<GridItemType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<GridItemType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GridItemType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<GridItemType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GridItemType_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>::
  clear((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
         *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<GridItemType>)0x0;
  return;
}


/* ObjectTypeDirectory<GridItemType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<GridItemType>::~ObjectTypeDirectory(ObjectTypeDirectory<GridItemType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660fee0;
  std::
  vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
           *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<GridItemType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GridItemType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<GridItemType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GridItemType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<GridItemType>> *)this);
  return;
}


/* ObjectTypeDirectory<GridItemType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<GridItemType>::~ObjectTypeDirectory(ObjectTypeDirectory<GridItemType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<EffectObjectType>::Clear() */

void __thiscall
ObjectTypeDirectory<EffectObjectType>::Clear(ObjectTypeDirectory<EffectObjectType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<EffectObjectType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<EffectObjectType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<EffectObjectType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<EffectObjectType_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<EffectObjectType_const>,std::allocator<Sexy::RtWeakPtr<EffectObjectType_const>>>
  ::clear((vector<Sexy::RtWeakPtr<EffectObjectType_const>,std::allocator<Sexy::RtWeakPtr<EffectObjectType_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<EffectObjectType>)0x0;
  return;
}


/* ObjectTypeDirectory<EffectObjectType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<EffectObjectType>::~ObjectTypeDirectory
          (ObjectTypeDirectory<EffectObjectType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660ff60;
  std::
  vector<Sexy::RtWeakPtr<EffectObjectType_const>,std::allocator<Sexy::RtWeakPtr<EffectObjectType_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<EffectObjectType_const>,std::allocator<Sexy::RtWeakPtr<EffectObjectType_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<EffectObjectType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<EffectObjectType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<EffectObjectType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<EffectObjectType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<EffectObjectType>> *)this);
  return;
}


/* ObjectTypeDirectory<EffectObjectType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<EffectObjectType>::~ObjectTypeDirectory
          (ObjectTypeDirectory<EffectObjectType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<CollectableType>::Clear() */

void __thiscall
ObjectTypeDirectory<CollectableType>::Clear(ObjectTypeDirectory<CollectableType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<CollectableType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CollectableType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<CollectableType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CollectableType_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<CollectableType_const>,std::allocator<Sexy::RtWeakPtr<CollectableType_const>>>
  ::clear((vector<Sexy::RtWeakPtr<CollectableType_const>,std::allocator<Sexy::RtWeakPtr<CollectableType_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<CollectableType>)0x0;
  return;
}


/* ObjectTypeDirectory<CollectableType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<CollectableType>::~ObjectTypeDirectory
          (ObjectTypeDirectory<CollectableType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660ffa0;
  std::
  vector<Sexy::RtWeakPtr<CollectableType_const>,std::allocator<Sexy::RtWeakPtr<CollectableType_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<CollectableType_const>,std::allocator<Sexy::RtWeakPtr<CollectableType_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<CollectableType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CollectableType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<CollectableType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CollectableType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<CollectableType>> *)this);
  return;
}


/* ObjectTypeDirectory<CollectableType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<CollectableType>::~ObjectTypeDirectory
          (ObjectTypeDirectory<CollectableType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<PresentType>::Clear() */

void __thiscall ObjectTypeDirectory<PresentType>::Clear(ObjectTypeDirectory<PresentType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<PresentType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<PresentType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentType_const>>>>
           *)(this + 8));
  std::vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  ::clear((vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PresentType>)0x0;
  return;
}


/* ObjectTypeDirectory<PresentType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PresentType>::~ObjectTypeDirectory(ObjectTypeDirectory<PresentType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610020;
  std::vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<PresentType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<PresentType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PresentType>> *)this);
  return;
}


/* ObjectTypeDirectory<PresentType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PresentType>::~ObjectTypeDirectory(ObjectTypeDirectory<PresentType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<PresentTable>::Clear() */

void __thiscall ObjectTypeDirectory<PresentTable>::Clear(ObjectTypeDirectory<PresentTable> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<PresentTable_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentTable_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<PresentTable_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentTable_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>::
  clear((vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
         *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PresentTable>)0x0;
  return;
}


/* ObjectTypeDirectory<PresentTable>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PresentTable>::~ObjectTypeDirectory(ObjectTypeDirectory<PresentTable> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_0660ffe0;
  std::
  vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
           *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<PresentTable_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentTable_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<PresentTable_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentTable_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<PresentTable>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PresentTable>> *)this);
  return;
}


/* ObjectTypeDirectory<PresentTable>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PresentTable>::~ObjectTypeDirectory(ObjectTypeDirectory<PresentTable> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<PowerupType>::Clear() */

void __thiscall ObjectTypeDirectory<PowerupType>::Clear(ObjectTypeDirectory<PowerupType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<PowerupType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerupType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<PowerupType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerupType_const>>>>
           *)(this + 8));
  std::vector<Sexy::RtWeakPtr<PowerupType_const>,std::allocator<Sexy::RtWeakPtr<PowerupType_const>>>
  ::clear((vector<Sexy::RtWeakPtr<PowerupType_const>,std::allocator<Sexy::RtWeakPtr<PowerupType_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PowerupType>)0x0;
  return;
}


/* ObjectTypeDirectory<PowerupType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PowerupType>::~ObjectTypeDirectory(ObjectTypeDirectory<PowerupType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610060;
  std::vector<Sexy::RtWeakPtr<PowerupType_const>,std::allocator<Sexy::RtWeakPtr<PowerupType_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<PowerupType_const>,std::allocator<Sexy::RtWeakPtr<PowerupType_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<PowerupType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerupType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<PowerupType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerupType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PowerupType>> *)this);
  return;
}


/* ObjectTypeDirectory<PowerupType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PowerupType>::~ObjectTypeDirectory(ObjectTypeDirectory<PowerupType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<GameFeatureType>::Clear() */

void __thiscall
ObjectTypeDirectory<GameFeatureType>::Clear(ObjectTypeDirectory<GameFeatureType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<GameFeatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GameFeatureType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<GameFeatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GameFeatureType_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<GameFeatureType_const>,std::allocator<Sexy::RtWeakPtr<GameFeatureType_const>>>
  ::clear((vector<Sexy::RtWeakPtr<GameFeatureType_const>,std::allocator<Sexy::RtWeakPtr<GameFeatureType_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<GameFeatureType>)0x0;
  return;
}


/* ObjectTypeDirectory<GameFeatureType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<GameFeatureType>::~ObjectTypeDirectory
          (ObjectTypeDirectory<GameFeatureType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066100a0;
  std::
  vector<Sexy::RtWeakPtr<GameFeatureType_const>,std::allocator<Sexy::RtWeakPtr<GameFeatureType_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<GameFeatureType_const>,std::allocator<Sexy::RtWeakPtr<GameFeatureType_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<GameFeatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GameFeatureType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<GameFeatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GameFeatureType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<GameFeatureType>> *)this);
  return;
}


/* ObjectTypeDirectory<GameFeatureType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<GameFeatureType>::~ObjectTypeDirectory
          (ObjectTypeDirectory<GameFeatureType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<ToolPacketProps>::Clear() */

void __thiscall
ObjectTypeDirectory<ToolPacketProps>::Clear(ObjectTypeDirectory<ToolPacketProps> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<ToolPacketProps_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ToolPacketProps_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<ToolPacketProps_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ToolPacketProps_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<ToolPacketProps_const>,std::allocator<Sexy::RtWeakPtr<ToolPacketProps_const>>>
  ::clear((vector<Sexy::RtWeakPtr<ToolPacketProps_const>,std::allocator<Sexy::RtWeakPtr<ToolPacketProps_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<ToolPacketProps>)0x0;
  return;
}


/* ObjectTypeDirectory<ToolPacketProps>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<ToolPacketProps>::~ObjectTypeDirectory
          (ObjectTypeDirectory<ToolPacketProps> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066102e0;
  std::
  vector<Sexy::RtWeakPtr<ToolPacketProps_const>,std::allocator<Sexy::RtWeakPtr<ToolPacketProps_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<ToolPacketProps_const>,std::allocator<Sexy::RtWeakPtr<ToolPacketProps_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<ToolPacketProps_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ToolPacketProps_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<ToolPacketProps_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ToolPacketProps_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<ToolPacketProps>> *)this);
  return;
}


/* ObjectTypeDirectory<ToolPacketProps>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<ToolPacketProps>::~ObjectTypeDirectory
          (ObjectTypeDirectory<ToolPacketProps> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<BonusType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<BonusType>::~ObjectTypeDirectory(ObjectTypeDirectory<BonusType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066101e0;
  std::vector<Sexy::RtWeakPtr<BonusType_const>,std::allocator<Sexy::RtWeakPtr<BonusType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<BonusType_const>,std::allocator<Sexy::RtWeakPtr<BonusType_const>>>
           *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<BonusType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<BonusType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<BonusType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<BonusType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<BonusType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<BonusType>> *)this);
  return;
}


/* ObjectTypeDirectory<BonusType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<BonusType>::~ObjectTypeDirectory(ObjectTypeDirectory<BonusType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<TrainingType>::Clear() */

void __thiscall ObjectTypeDirectory<TrainingType>::Clear(ObjectTypeDirectory<TrainingType> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>::
  clear((vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
         *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<TrainingType>)0x0;
  return;
}


/* ObjectTypeDirectory<TrainingType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<TrainingType>::~ObjectTypeDirectory(ObjectTypeDirectory<TrainingType> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610320;
  std::
  vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
           *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<TrainingType>> *)this);
  return;
}


/* ObjectTypeDirectory<TrainingType>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<TrainingType>::~ObjectTypeDirectory(ObjectTypeDirectory<TrainingType> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<LevelScoringRules>::Clear() */

void __thiscall
ObjectTypeDirectory<LevelScoringRules>::Clear(ObjectTypeDirectory<LevelScoringRules> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<LevelScoringRules_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<LevelScoringRules_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<LevelScoringRules_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<LevelScoringRules_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<LevelScoringRules_const>,std::allocator<Sexy::RtWeakPtr<LevelScoringRules_const>>>
  ::clear((vector<Sexy::RtWeakPtr<LevelScoringRules_const>,std::allocator<Sexy::RtWeakPtr<LevelScoringRules_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<LevelScoringRules>)0x0;
  return;
}


/* ObjectTypeDirectory<LevelScoringRules>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<LevelScoringRules>::~ObjectTypeDirectory
          (ObjectTypeDirectory<LevelScoringRules> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066101a0;
  std::
  vector<Sexy::RtWeakPtr<LevelScoringRules_const>,std::allocator<Sexy::RtWeakPtr<LevelScoringRules_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelScoringRules_const>,std::allocator<Sexy::RtWeakPtr<LevelScoringRules_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<LevelScoringRules_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<LevelScoringRules_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<LevelScoringRules_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<LevelScoringRules_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<LevelScoringRules>> *)this);
  return;
}


/* ObjectTypeDirectory<LevelScoringRules>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<LevelScoringRules>::~ObjectTypeDirectory
          (ObjectTypeDirectory<LevelScoringRules> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<HotUIColor>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<HotUIColor>::~ObjectTypeDirectory(ObjectTypeDirectory<HotUIColor> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610120;
  std::vector<Sexy::RtWeakPtr<HotUIColor_const>,std::allocator<Sexy::RtWeakPtr<HotUIColor_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<HotUIColor_const>,std::allocator<Sexy::RtWeakPtr<HotUIColor_const>>>
           *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<HotUIColor_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColor_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<HotUIColor_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColor_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<HotUIColor>> *)this);
  return;
}


/* ObjectTypeDirectory<HotUIColor>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<HotUIColor>::~ObjectTypeDirectory(ObjectTypeDirectory<HotUIColor> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<HotUIColor>::Clear() */

void __thiscall ObjectTypeDirectory<HotUIColor>::Clear(ObjectTypeDirectory<HotUIColor> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<HotUIColor_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColor_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<HotUIColor_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColor_const>>>>
           *)(this + 8));
  std::vector<Sexy::RtWeakPtr<HotUIColor_const>,std::allocator<Sexy::RtWeakPtr<HotUIColor_const>>>::
  clear((vector<Sexy::RtWeakPtr<HotUIColor_const>,std::allocator<Sexy::RtWeakPtr<HotUIColor_const>>>
         *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<HotUIColor>)0x0;
  return;
}


/* ObjectTypeDirectory<HotUIColorAlias>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<HotUIColorAlias>::~ObjectTypeDirectory
          (ObjectTypeDirectory<HotUIColorAlias> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06610160;
  std::
  vector<Sexy::RtWeakPtr<HotUIColorAlias_const>,std::allocator<Sexy::RtWeakPtr<HotUIColorAlias_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<HotUIColorAlias_const>,std::allocator<Sexy::RtWeakPtr<HotUIColorAlias_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<HotUIColorAlias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColorAlias_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<HotUIColorAlias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColorAlias_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<HotUIColorAlias>> *)this);
  return;
}


/* ObjectTypeDirectory<HotUIColorAlias>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<HotUIColorAlias>::~ObjectTypeDirectory
          (ObjectTypeDirectory<HotUIColorAlias> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<HotUIColorAlias>::Clear() */

void __thiscall
ObjectTypeDirectory<HotUIColorAlias>::Clear(ObjectTypeDirectory<HotUIColorAlias> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<HotUIColorAlias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColorAlias_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<HotUIColorAlias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColorAlias_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<HotUIColorAlias_const>,std::allocator<Sexy::RtWeakPtr<HotUIColorAlias_const>>>
  ::clear((vector<Sexy::RtWeakPtr<HotUIColorAlias_const>,std::allocator<Sexy::RtWeakPtr<HotUIColorAlias_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<HotUIColorAlias>)0x0;
  return;
}


/* ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::~ObjectTypeDirectory
          (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_066100e0;
  std::
  vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>> *)this);
  return;
}


/* ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::~ObjectTypeDirectory
          (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::Clear() */

void __thiscall
ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::Clear
          (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *this)

{
  std::
  map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>>
  ::clear((map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>>
           *)(this + 8));
  std::
  vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>
  ::clear((vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>
           *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PlantType>::SortTypes(std::vector<std::string, std::allocator<std::string > >
   const&) */

void __thiscall
ObjectTypeDirectory<PlantType>::SortTypes(ObjectTypeDirectory<PlantType> *this,vector *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  string *psVar5;
  RtWeakPtr *pRVar6;
  long lVar7;
  long lVar8;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  set<Sexy::RtWeakPtr<PlantType_const>,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
  asStack_38 [48];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  lVar8 = 0;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  std::
  set<Sexy::RtWeakPtr<PlantType_const>,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
  ::
  set<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlantType_const>*,std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>>>
            (asStack_38,uVar3,uVar4);
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  clear((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>> *
        )this_00);
  uVar3 = *(undefined8 *)param_1;
  iVar2 = FUN_0325d79c(uVar3,*(undefined8 *)(param_1 + 8));
  if (0 < iVar2) {
    do {
      psVar5 = (string *)FUN_0325d7a8(uVar3,lVar8);
      local_40 = std::
                 map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
                 ::find((map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
                         *)(this + 8),psVar5);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                (agStack_50,(TextureInfo ***)&local_40);
      local_48 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(this + 8));
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_40,
                 (TextureInfo ***)&local_48);
      bVar1 = eastl::operator!=((rbtree_iterator *)agStack_50,(rbtree_iterator *)&local_40);
      if (bVar1) {
        lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_50);
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)this_00,(RtWeakPtr *)(lVar7 + 8));
        lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_50);
        uVar3 = std::
                set<Sexy::RtWeakPtr<PlantType_const>,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                ::find(asStack_38,(RtWeakPtr *)(lVar7 + 8));
        std::
        set<Sexy::RtWeakPtr<PlantType_const>,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
        ::erase_abi_cxx11_(asStack_38,uVar3);
      }
      lVar8 = lVar8 + 1;
      uVar3 = *(undefined8 *)param_1;
      iVar2 = FUN_0325d79c(uVar3,*(undefined8 *)(param_1 + 8));
    } while ((int)lVar8 < iVar2);
  }
  local_48 = std::
             set<Sexy::RtWeakPtr<PlantType_const>,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
             ::begin(asStack_38);
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)asStack_38);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
    if (!bVar1) break;
    pRVar6 = (RtWeakPtr *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
               *)this_00,pRVar6);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
  }
  std::
  set<Sexy::RtWeakPtr<PlantType_const>,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
  ::~set(asStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PlantType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<PlantType>::Init(ObjectTypeDirectory<PlantType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = PlantType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<PlantType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PlantType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<PlantType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<ZombieType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<ZombieType>::Init(ObjectTypeDirectory<ZombieType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = ZombieType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<ZombieType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<CollectableType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<CollectableType>::Init
          (ObjectTypeDirectory<CollectableType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = CollectableType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<CollectableType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CollectableType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<CollectableType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CollectableType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<CollectableType_const>,std::allocator<Sexy::RtWeakPtr<CollectableType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<CollectableType_const>,std::allocator<Sexy::RtWeakPtr<CollectableType_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<CollectableType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PowerPropertySheet>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<PowerPropertySheet>::Init
          (ObjectTypeDirectory<PowerPropertySheet> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = PowerPropertySheet::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<PowerPropertySheet_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerPropertySheet_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<PowerPropertySheet_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerPropertySheet_const>>>>
                                *)(this + 8),(string *)(lVar5 + 0x10));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<PowerPropertySheet_const>,std::allocator<Sexy::RtWeakPtr<PowerPropertySheet_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<PowerPropertySheet_const>,std::allocator<Sexy::RtWeakPtr<PowerPropertySheet_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<PowerPropertySheet>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<CreatureType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<CreatureType>::Init(ObjectTypeDirectory<CreatureType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = CreatureType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<CreatureType_const>,std::allocator<Sexy::RtWeakPtr<CreatureType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<CreatureType_const>,std::allocator<Sexy::RtWeakPtr<CreatureType_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<CreatureType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<GridItemType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<GridItemType>::Init(ObjectTypeDirectory<GridItemType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = GridItemType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<GridItemType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GridItemType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<GridItemType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GridItemType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<GridItemType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<EffectObjectType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<EffectObjectType>::Init
          (ObjectTypeDirectory<EffectObjectType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = EffectObjectType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<EffectObjectType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<EffectObjectType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<EffectObjectType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<EffectObjectType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<EffectObjectType_const>,std::allocator<Sexy::RtWeakPtr<EffectObjectType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<EffectObjectType_const>,std::allocator<Sexy::RtWeakPtr<EffectObjectType_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<EffectObjectType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PresentType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<PresentType>::Init(ObjectTypeDirectory<PresentType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = PresentType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<PresentType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<PresentType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<PresentType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PresentTable>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<PresentTable>::Init(ObjectTypeDirectory<PresentTable> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = PresentTable::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<PresentTable_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentTable_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<PresentTable_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentTable_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<PresentTable>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PowerupType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<PowerupType>::Init(ObjectTypeDirectory<PowerupType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = PowerupType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<PowerupType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerupType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<PowerupType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerupType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<PowerupType_const>,std::allocator<Sexy::RtWeakPtr<PowerupType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<PowerupType_const>,std::allocator<Sexy::RtWeakPtr<PowerupType_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<PowerupType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<GameFeatureType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<GameFeatureType>::Init
          (ObjectTypeDirectory<GameFeatureType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = GameFeatureType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<GameFeatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GameFeatureType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<GameFeatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GameFeatureType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<GameFeatureType_const>,std::allocator<Sexy::RtWeakPtr<GameFeatureType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<GameFeatureType_const>,std::allocator<Sexy::RtWeakPtr<GameFeatureType_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<GameFeatureType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<ToolPacketProps>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<ToolPacketProps>::Init
          (ObjectTypeDirectory<ToolPacketProps> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = ToolPacketProps::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<ToolPacketProps_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ToolPacketProps_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<ToolPacketProps_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ToolPacketProps_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<ToolPacketProps_const>,std::allocator<Sexy::RtWeakPtr<ToolPacketProps_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<ToolPacketProps_const>,std::allocator<Sexy::RtWeakPtr<ToolPacketProps_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<ToolPacketProps>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<BonusType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<BonusType>::Init(ObjectTypeDirectory<BonusType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = BonusType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<BonusType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<BonusType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<BonusType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<BonusType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<BonusType_const>,std::allocator<Sexy::RtWeakPtr<BonusType_const>>>::
        push_back((vector<Sexy::RtWeakPtr<BonusType_const>,std::allocator<Sexy::RtWeakPtr<BonusType_const>>>
                   *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<BonusType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<TrainingType>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<TrainingType>::Init(ObjectTypeDirectory<TrainingType> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = TrainingType::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<TrainingType>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<LevelScoringRules>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<LevelScoringRules>::Init
          (ObjectTypeDirectory<LevelScoringRules> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = LevelScoringRules::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<LevelScoringRules_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<LevelScoringRules_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<LevelScoringRules_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<LevelScoringRules_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<LevelScoringRules_const>,std::allocator<Sexy::RtWeakPtr<LevelScoringRules_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<LevelScoringRules_const>,std::allocator<Sexy::RtWeakPtr<LevelScoringRules_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<LevelScoringRules>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ObjectTypeDirectory<PlantType>::GetCount() const */

void __thiscall ObjectTypeDirectory<PlantType>::GetCount(ObjectTypeDirectory<PlantType> *this)

{
  FUN_0329c000(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  return;
}


/* ObjectTypeDirectory<PlantType>::GetTypeFromIndex(unsigned int) const */

void ObjectTypeDirectory<PlantType>::GetTypeFromIndex(uint param_1)

{
  RtWeakPtrBase *pRVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  pRVar1 = (RtWeakPtrBase *)FUN_0329c210(*(undefined8 *)((ulong)param_1 + 0x38),in_w1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar1);
  return;
}


/* ObjectTypeDirectory<CreatureType>::GetCount() const */

void __thiscall ObjectTypeDirectory<CreatureType>::GetCount(ObjectTypeDirectory<CreatureType> *this)

{
  FUN_0329c3c8(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  return;
}


/* ObjectTypeDirectory<CreatureType>::GetTypeFromIndex(unsigned int) const */

void ObjectTypeDirectory<CreatureType>::GetTypeFromIndex(uint param_1)

{
  RtWeakPtrBase *pRVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  pRVar1 = (RtWeakPtrBase *)FUN_0329c3d4(*(undefined8 *)((ulong)param_1 + 0x38),in_w1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar1);
  return;
}


/* ObjectTypeDirectory<ZombieType>::GetCount() const */

void __thiscall ObjectTypeDirectory<ZombieType>::GetCount(ObjectTypeDirectory<ZombieType> *this)

{
  FUN_0329c3e4(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  return;
}


/* ObjectTypeDirectory<ZombieType>::GetTypeFromIndex(unsigned int) const */

void ObjectTypeDirectory<ZombieType>::GetTypeFromIndex(uint param_1)

{
  RtWeakPtrBase *pRVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  pRVar1 = (RtWeakPtrBase *)FUN_0329c3f0(*(undefined8 *)((ulong)param_1 + 0x38),in_w1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<GridItemType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GridItemType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<GridItemType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GridItemType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<EffectObjectType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<EffectObjectType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<EffectObjectType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<EffectObjectType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<EffectObjectType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<EffectObjectType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PresentTable>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<PresentTable>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<PresentTable_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentTable_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<PresentTable_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentTable_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<ZombieType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ZombieType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PresentType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<PresentType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<PresentType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<PresentType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PresentType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<HotUIColorAlias>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<HotUIColorAlias>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<HotUIColorAlias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColorAlias_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<HotUIColorAlias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColorAlias_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<HotUIColor>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<HotUIColor>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<HotUIColor_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColor_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<HotUIColor_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColor_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<CreatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<CreatureType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<LevelScoringRules>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<LevelScoringRules>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<LevelScoringRules_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<LevelScoringRules_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<LevelScoringRules_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<LevelScoringRules_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<PowerupType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerupType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<PowerupType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerupType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ObjectTypeDirectory<GameFeatureType>::GetTypeFromIndex(unsigned int) const */

void ObjectTypeDirectory<GameFeatureType>::GetTypeFromIndex(uint param_1)

{
  RtWeakPtrBase *pRVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  pRVar1 = (RtWeakPtrBase *)FUN_03b46200(*(undefined8 *)((ulong)param_1 + 0x38),in_w1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar1);
  return;
}


/* ObjectTypeDirectory<PrimeText_PotentialTypeface>::ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PrimeText_PotentialTypeface>::ObjectTypeDirectory
          (ObjectTypeDirectory<PrimeText_PotentialTypeface> *this)

{
  Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>>::LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>> *)this);
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06833920;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (ObjectTypeDirectory<PrimeText_PotentialTypeface>)0x0;
  return;
}


/* ObjectTypeDirectory<PrimeText_PotentialTypeface>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PrimeText_PotentialTypeface>::~ObjectTypeDirectory
          (ObjectTypeDirectory<PrimeText_PotentialTypeface> *this)

{
  *(undefined ***)this = &PTR__ObjectTypeDirectory_06833920;
  std::
  vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>
             *)(this + 0x38));
  std::
  map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>>
  ::~map((map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>>
          *)(this + 8));
  Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>>::~LazySingleton
            ((LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>> *)this);
  return;
}


/* ObjectTypeDirectory<PrimeText_PotentialTypeface>::~ObjectTypeDirectory() */

void __thiscall
ObjectTypeDirectory<PrimeText_PotentialTypeface>::~ObjectTypeDirectory
          (ObjectTypeDirectory<PrimeText_PotentialTypeface> *this)

{
  ~ObjectTypeDirectory(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PrimeText_PotentialTypeface>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<PrimeText_PotentialTypeface>::Init
          (ObjectTypeDirectory<PrimeText_PotentialTypeface> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = PrimeText_PotentialTypeface::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<PrimeText_PotentialTypeface>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::Init
          (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = PrimeText_PotentialTypeface_Alias::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::allocator<Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<HotUIColor>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<HotUIColor>::Init(ObjectTypeDirectory<HotUIColor> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = HotUIColor::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<HotUIColor_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColor_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<HotUIColor_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColor_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<HotUIColor_const>,std::allocator<Sexy::RtWeakPtr<HotUIColor_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<HotUIColor_const>,std::allocator<Sexy::RtWeakPtr<HotUIColor_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<HotUIColor>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<HotUIColorAlias>::Init(PVZDB::TableIndex) */

void __thiscall
ObjectTypeDirectory<HotUIColorAlias>::Init
          (ObjectTypeDirectory<HotUIColorAlias> *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,param_2);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = HotUIColorAlias::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  std::
                  map<std::string,Sexy::RtWeakPtr<HotUIColorAlias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColorAlias_const>>>>
                  ::operator[]((map<std::string,Sexy::RtWeakPtr<HotUIColorAlias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<HotUIColorAlias_const>>>>
                                *)(this + 8),(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_30);
        std::
        vector<Sexy::RtWeakPtr<HotUIColorAlias_const>,std::allocator<Sexy::RtWeakPtr<HotUIColorAlias_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<HotUIColorAlias_const>,std::allocator<Sexy::RtWeakPtr<HotUIColorAlias_const>>>
                     *)(this + 0x38),(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x50] = (ObjectTypeDirectory<HotUIColorAlias>)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::GetTypeFromTypeName(std::string const&)
   const */

void ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_Alias_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PrimeText_PotentialTypeface>::GetTypeFromTypeName(std::string const&) const
    */

void ObjectTypeDirectory<PrimeText_PotentialTypeface>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PrimeText_PotentialTypeface_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<GameFeatureType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<GameFeatureType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<GameFeatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GameFeatureType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<GameFeatureType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<GameFeatureType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<ToolPacketProps>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<ToolPacketProps>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<ToolPacketProps_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ToolPacketProps_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<ToolPacketProps_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<ToolPacketProps_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<PowerPropertySheet>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<PowerPropertySheet>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<PowerPropertySheet_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerPropertySheet_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<PowerPropertySheet_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<PowerPropertySheet_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ObjectTypeDirectory<TrainingType>::GetCount() const */

void __thiscall ObjectTypeDirectory<TrainingType>::GetCount(ObjectTypeDirectory<TrainingType> *this)

{
  FUN_04ac8d58(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  return;
}


/* ObjectTypeDirectory<TrainingType>::GetTypeFromIndex(unsigned int) const */

void ObjectTypeDirectory<TrainingType>::GetTypeFromIndex(uint param_1)

{
  RtWeakPtrBase *pRVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  pRVar1 = (RtWeakPtrBase *)FUN_04ac8d64(*(undefined8 *)((ulong)param_1 + 0x38),in_w1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(std::string const&) const */

void ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(string *param_1)

{
  char cVar1;
  long lVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
                     *)(param_1 + 8),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 8));
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDirectory<TrainingType>::SortTypes(std::vector<std::string, std::allocator<std::string
   > > const&) */

void __thiscall
ObjectTypeDirectory<TrainingType>::SortTypes
          (ObjectTypeDirectory<TrainingType> *this,vector *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  string *psVar5;
  RtWeakPtr *pRVar6;
  long lVar7;
  long lVar8;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  set<Sexy::RtWeakPtr<TrainingType_const>,std::less<Sexy::RtWeakPtr<TrainingType_const>>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
  asStack_38 [48];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  lVar8 = 0;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  std::
  set<Sexy::RtWeakPtr<TrainingType_const>,std::less<Sexy::RtWeakPtr<TrainingType_const>>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
  ::
  set<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<TrainingType_const>*,std::vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>>>
            (asStack_38,uVar3,uVar4);
  std::
  vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>::
  clear((vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
         *)this_00);
  uVar3 = *(undefined8 *)param_1;
  iVar2 = FUN_04ac8d18(uVar3,*(undefined8 *)(param_1 + 8));
  if (0 < iVar2) {
    do {
      psVar5 = (string *)FUN_04ac8d6c(uVar3,lVar8);
      local_40 = std::
                 map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
                 ::find((map<std::string,Sexy::RtWeakPtr<TrainingType_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<TrainingType_const>>>>
                         *)(this + 8),psVar5);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                (agStack_50,(TextureInfo ***)&local_40);
      local_48 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(this + 8));
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_40,
                 (TextureInfo ***)&local_48);
      bVar1 = eastl::operator!=((rbtree_iterator *)agStack_50,(rbtree_iterator *)&local_40);
      if (bVar1) {
        lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_50);
        std::
        vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
                     *)this_00,(RtWeakPtr *)(lVar7 + 8));
        lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_50);
        uVar3 = std::
                set<Sexy::RtWeakPtr<TrainingType_const>,std::less<Sexy::RtWeakPtr<TrainingType_const>>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
                ::find(asStack_38,(RtWeakPtr *)(lVar7 + 8));
        std::
        set<Sexy::RtWeakPtr<TrainingType_const>,std::less<Sexy::RtWeakPtr<TrainingType_const>>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
        ::erase_abi_cxx11_(asStack_38,uVar3);
      }
      lVar8 = lVar8 + 1;
      uVar3 = *(undefined8 *)param_1;
      iVar2 = FUN_04ac8d18(uVar3,*(undefined8 *)(param_1 + 8));
    } while ((int)lVar8 < iVar2);
  }
  local_48 = std::
             set<Sexy::RtWeakPtr<TrainingType_const>,std::less<Sexy::RtWeakPtr<TrainingType_const>>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
             ::begin(asStack_38);
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)asStack_38);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
    if (!bVar1) break;
    pRVar6 = (RtWeakPtr *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    std::
    vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
    ::push_back((vector<Sexy::RtWeakPtr<TrainingType_const>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
                 *)this_00,pRVar6);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
  }
  std::
  set<Sexy::RtWeakPtr<TrainingType_const>,std::less<Sexy::RtWeakPtr<TrainingType_const>>,std::allocator<Sexy::RtWeakPtr<TrainingType_const>>>
  ::~set(asStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ObjectTypeDirectory<CollectableType>::GetTypeFromIndex(unsigned int) const */

void ObjectTypeDirectory<CollectableType>::GetTypeFromIndex(uint param_1)

{
  RtWeakPtrBase *pRVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  pRVar1 = (RtWeakPtrBase *)FUN_050d27d0(*(undefined8 *)((ulong)param_1 + 0x38),in_w1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar1);
  return;
}

