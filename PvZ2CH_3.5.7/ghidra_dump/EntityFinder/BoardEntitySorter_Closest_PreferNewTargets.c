// Class: EntityFinder::BoardEntitySorter_Closest_PreferNewTargets


/* EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::~BoardEntitySorter_Closest_PreferNewTargets()
    */

void __thiscall
EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::
~BoardEntitySorter_Closest_PreferNewTargets(BoardEntitySorter_Closest_PreferNewTargets *this)

{
  *(undefined ***)this = &PTR__BoardEntitySorter_Closest_PreferNewTargets_067b55a0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x18));
  return;
}


/* EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::~BoardEntitySorter_Closest_PreferNewTargets()
    */

void __thiscall
EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::
~BoardEntitySorter_Closest_PreferNewTargets(BoardEntitySorter_Closest_PreferNewTargets *this)

{
  ~BoardEntitySorter_Closest_PreferNewTargets(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::isPreviousTarget(BoardEntity*) const */

void EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::isPreviousTarget
               (BoardEntity *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0400dbe8(*(undefined8 *)(param_1 + 0x18));
  uVar3 = FUN_0400dc38(*(undefined8 *)(param_1 + 0x20));
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>const*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar2,uVar3,aRStack_20);
  local_10 = FUN_0400dc38(*(undefined8 *)(param_1 + 0x20));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::TEMPNAMEPLACEHOLDERVALUE(BoardEntity*,
   BoardEntity*) const */

void EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::operator()
               (BoardEntity *param_1,BoardEntity *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  SexyVector3 *this;
  SexyVector3 *this_00;
  RtObject *in_x2;
  float fVar6;
  float fVar7;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::function<bool(BoardEntity_const*)>::operator()
                    ((function<bool(BoardEntity_const*)> *)(param_1 + 0x40),param_2);
  bVar2 = 0;
  if ((cVar1 != '\0') ||
     (bVar2 = std::function<bool(BoardEntity_const*)>::operator()
                        ((function<bool(BoardEntity_const*)> *)(param_1 + 0x40),(BoardEntity *)in_x2
                        ), bVar2 != 0)) goto LAB_0400ea44;
  if (param_2 == (BoardEntity *)0x0) {
    bVar2 = false;
    if (in_x2 != (RtObject *)0x0) goto LAB_0400ea9c;
    bVar4 = isPreviousTarget(param_1);
    bVar2 = isPreviousTarget(param_1);
    if (bVar4 == bVar2) goto LAB_0400eb18;
  }
  else {
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_2);
    if (in_x2 == (RtObject *)0x0) {
      bVar3 = false;
    }
    else {
LAB_0400ea9c:
      bVar3 = Sexy::RtObject::IsA<Zombie>(in_x2);
    }
    if (((bVar3 ^ bVar2) != 0) && (param_1[0x38] != (BoardEntity)0x0)) goto LAB_0400ea44;
    bVar4 = isPreviousTarget(param_1);
    bVar5 = isPreviousTarget(param_1);
    if (bVar4 == bVar5) {
      if ((bVar3 ^ bVar2) != 0) goto LAB_0400ea44;
LAB_0400eb18:
      this = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
      local_18[0] = Sexy::SexyVector3::operator-(this,(SexyVector3 *)(param_1 + 8));
      fVar6 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)local_18);
      this_00 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)in_x2);
      local_18[0] = Sexy::SexyVector3::operator-(this_00,(SexyVector3 *)(param_1 + 8));
      fVar7 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)local_18);
      bVar2 = (*(float *)this - 200.0) * (*(float *)this - 200.0) * *(float *)(param_1 + 0x34) +
              *(float *)(param_1 + 0x30) * fVar6 <
              (*(float *)this_00 - 200.0) * (*(float *)this_00 - 200.0) * *(float *)(param_1 + 0x34)
              + *(float *)(param_1 + 0x30) * fVar7;
      goto LAB_0400ea44;
    }
  }
  bVar2 = bVar4 ^ 1;
LAB_0400ea44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::BoardEntitySorter_Closest_PreferNewTargets(Sexy::SexyVector3,
   std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > > const&,
   float, float, bool, std::function<bool (BoardEntity const*)>) */

void __thiscall
EntityFinder::BoardEntitySorter_Closest_PreferNewTargets::BoardEntitySorter_Closest_PreferNewTargets
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,BoardEntitySorter_Closest_PreferNewTargets *this,vector *param_7,
          BoardEntitySorter_Closest_PreferNewTargets param_8,function *param_9)

{
  BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR__BoardEntitySorter_Closest_PreferNewTargets_067b55a0;
  *(ulong *)(this + 8) = CONCAT44(param_2,param_1);
  *(undefined4 *)(this + 0x10) = param_3;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x18),param_7);
  this[0x38] = param_8;
  *(undefined4 *)(this + 0x30) = param_4;
  *(undefined4 *)(this + 0x34) = param_5;
  std::function<bool(BoardEntity_const*)>::function
            ((function<bool(BoardEntity_const*)> *)(this + 0x40),param_9);
  return;
}

