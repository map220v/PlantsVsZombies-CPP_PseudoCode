// Class: __gnu_cxx::__ops::_Iter_comp_iter<bool(*)(PlantAccessoryInfo,PlantAccessoryInfo)>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(PlantAccessoryInfo,
   PlantAccessoryInfo)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantAccessoryInfo*,
   std::vector<PlantAccessoryInfo, std::allocator<PlantAccessoryInfo> > >,
   __gnu_cxx::__normal_iterator<PlantAccessoryInfo*, std::vector<PlantAccessoryInfo,
   std::allocator<PlantAccessoryInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(PlantAccessoryInfo,PlantAccessoryInfo)>::operator()
          (_Iter_comp_iter<bool(*)(PlantAccessoryInfo,PlantAccessoryInfo)> *this,undefined8 param_2,
          undefined8 param_3)

{
  undefined1 uVar1;
  PlantAccessoryInfo *pPVar2;
  code *pcVar3;
  undefined8 local_60;
  undefined8 local_58 [2];
  PlantAccessoryInfo aPStack_48 [32];
  PlantAccessoryInfo aPStack_28 [32];
  long local_8;
  
  pcVar3 = *(code **)this;
  local_8 = ___stack_chk_guard;
  local_60 = param_3;
  local_58[0] = param_2;
  pPVar2 = (PlantAccessoryInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
  PlantAccessoryInfo::PlantAccessoryInfo(aPStack_48,pPVar2);
  pPVar2 = (PlantAccessoryInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
  PlantAccessoryInfo::PlantAccessoryInfo(aPStack_28,pPVar2);
  uVar1 = (*pcVar3)(aPStack_48,aPStack_28);
  PakRecord::~PakRecord((PakRecord *)aPStack_28);
  PakRecord::~PakRecord((PakRecord *)aPStack_48);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantPieceRecord::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantPieceRecord::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantPieceRecord*,
   std::vector<PlantPieceRecord, std::allocator<PlantPieceRecord> > >,
   __gnu_cxx::__normal_iterator<PlantPieceRecord*, std::vector<PlantPieceRecord,
   std::allocator<PlantPieceRecord> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantPieceRecord *pPVar2;
  PlantPieceRecord *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantPieceRecord *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pPVar3 = (PlantPieceRecord *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::equal_to<int> (std::_Bind<std::_Mem_fn<int
   PlantPieceRecord::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantPieceRecord::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantPieceRecord*,
   std::vector<PlantPieceRecord, std::allocator<PlantPieceRecord> > >,
   __gnu_cxx::__normal_iterator<PlantPieceRecord*, std::vector<PlantPieceRecord,
   std::allocator<PlantPieceRecord> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantPieceRecord *pPVar2;
  PlantPieceRecord *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantPieceRecord *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pPVar3 = (PlantPieceRecord *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantStarLevel::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantStarLevel::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantStarLevel*,
   std::vector<PlantStarLevel, std::allocator<PlantStarLevel> > >,
   __gnu_cxx::__normal_iterator<PlantStarLevel*, std::vector<PlantStarLevel,
   std::allocator<PlantStarLevel> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantStarLevel *pPVar2;
  PlantStarLevel *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pPVar3 = (PlantStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10)
  ;
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::equal_to<int> (std::_Bind<std::_Mem_fn<int
   PlantStarLevel::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantStarLevel::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantStarLevel*,
   std::vector<PlantStarLevel, std::allocator<PlantStarLevel> > >,
   __gnu_cxx::__normal_iterator<PlantStarLevel*, std::vector<PlantStarLevel,
   std::allocator<PlantStarLevel> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantStarLevel *pPVar2;
  PlantStarLevel *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pPVar3 = (PlantStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10)
  ;
  bVar1 = std::
          _Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   ZombieStarLevel::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int ZombieStarLevel::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<ZombieStarLevel*,
   std::vector<ZombieStarLevel, std::allocator<ZombieStarLevel> > >,
   __gnu_cxx::__normal_iterator<ZombieStarLevel*, std::vector<ZombieStarLevel,
   std::allocator<ZombieStarLevel> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ZombieStarLevel *pZVar2;
  ZombieStarLevel *pZVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pZVar2 = (ZombieStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8)
  ;
  pZVar3 = (ZombieStarLevel *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>
                        *)this,pZVar2,pZVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::equal_to<int> (std::_Bind<std::_Mem_fn<int
   ZombieStarLevel::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int ZombieStarLevel::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<ZombieStarLevel*,
   std::vector<ZombieStarLevel, std::allocator<ZombieStarLevel> > >,
   __gnu_cxx::__normal_iterator<ZombieStarLevel*, std::vector<ZombieStarLevel,
   std::allocator<ZombieStarLevel> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ZombieStarLevel *pZVar2;
  ZombieStarLevel *pZVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pZVar2 = (ZombieStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8)
  ;
  pZVar3 = (ZombieStarLevel *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>
                        *)this,pZVar2,pZVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<long
   BundleDisplay::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<long BundleDisplay::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BundleDisplay*,
   std::vector<BundleDisplay, std::allocator<BundleDisplay> > >,
   __gnu_cxx::__normal_iterator<BundleDisplay*, std::vector<BundleDisplay,
   std::allocator<BundleDisplay> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  BundleDisplay *pBVar2;
  BundleDisplay *pBVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pBVar2 = (BundleDisplay *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pBVar3 = (BundleDisplay *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>
                        *)this,pBVar2,pBVar3);
  return bVar1;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_iter<EntityFinder::BoardEntitySorter_ClosestByColumn>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BoardEntity**,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> > >,
   __gnu_cxx::__normal_iterator<BoardEntity**, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<EntityFinder::BoardEntitySorter_ClosestByColumn>::operator()
          (_Iter_comp_iter<EntityFinder::BoardEntitySorter_ClosestByColumn> *this,undefined8 param_2
          ,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = EntityFinder::BoardEntitySorter_ClosestByColumn::operator()
                    ((BoardEntity *)this,(BoardEntity *)*puVar2);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(BoardEntity const*, BoardEntity
   const*)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BoardEntity**,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> > >,
   __gnu_cxx::__normal_iterator<BoardEntity**, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(BoardEntity_const*,BoardEntity_const*)>::operator()
          (_Iter_comp_iter<bool(*)(BoardEntity_const*,BoardEntity_const*)> *this,undefined8 param_2,
          undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = (**(code **)this)(*puVar2,*puVar3);
  return (bool)uVar1;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_iter<CollectionSorter>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<LevelBasedSelectInfo*,
   std::vector<LevelBasedSelectInfo, std::allocator<LevelBasedSelectInfo> > >,
   __gnu_cxx::__normal_iterator<LevelBasedSelectInfo*, std::vector<LevelBasedSelectInfo,
   std::allocator<LevelBasedSelectInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<CollectionSorter>::operator()
          (_Iter_comp_iter<CollectionSorter> *this,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  LevelBasedSelectInfo *pLVar2;
  LevelBasedSelectInfo *pLVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pLVar2 = (LevelBasedSelectInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pLVar3 = (LevelBasedSelectInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = CollectionSorter::operator()((CollectionSorter *)this,pLVar2,pLVar3);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Sexy::LeaderboardEntry const&,
   Sexy::LeaderboardEntry
   const&)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::LeaderboardEntry*,
   std::vector<Sexy::LeaderboardEntry, std::allocator<Sexy::LeaderboardEntry> > >,
   __gnu_cxx::__normal_iterator<Sexy::LeaderboardEntry*, std::vector<Sexy::LeaderboardEntry,
   std::allocator<Sexy::LeaderboardEntry> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<bool(*)(Sexy::LeaderboardEntry_const&,Sexy::LeaderboardEntry_const&)>::operator()
          (_Iter_comp_iter<bool(*)(Sexy::LeaderboardEntry_const&,Sexy::LeaderboardEntry_const&)>
           *this,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = (**(code **)this)(uVar2,uVar3);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int,
   int)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(int,int)>::operator()
          (_Iter_comp_iter<bool(*)(int,int)> *this,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = (**(code **)this)(*puVar2,*puVar3);
  return (bool)uVar1;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_iter<EntityFinder::BoardEntitySorter_Closest>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,
   std::vector<Sexy::RtWeakPtr<Zombie>, std::allocator<Sexy::RtWeakPtr<Zombie> > > >,
   __gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*, std::vector<Sexy::RtWeakPtr<Zombie>,
   std::allocator<Sexy::RtWeakPtr<Zombie> > > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<EntityFinder::BoardEntitySorter_Closest>::operator()
          (_Iter_comp_iter<EntityFinder::BoardEntitySorter_Closest> *this,undefined8 param_2,
          undefined8 param_3)

{
  undefined1 uVar1;
  RtWeakPtr *pRVar2;
  ResourceInfo *pRVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pRVar2 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar2);
  pRVar2 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar2);
  uVar1 = EntityFinder::BoardEntitySorter_Closest::operator()
                    ((BoardEntity *)this,(BoardEntity *)pRVar3);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::function<bool (AwardDiffEntry const&, AwardDiffEntry
   const&)> >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<AwardDiffEntry*,
   std::vector<AwardDiffEntry, std::allocator<AwardDiffEntry> > >,
   __gnu_cxx::__normal_iterator<AwardDiffEntry*, std::vector<AwardDiffEntry,
   std::allocator<AwardDiffEntry> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>>
::operator()(_Iter_comp_iter<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>> *this
            ,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  AwardDiffEntry *pAVar2;
  AwardDiffEntry *pAVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pAVar2 = (AwardDiffEntry *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pAVar3 = (AwardDiffEntry *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10)
  ;
  uVar1 = std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>::operator()
                    ((function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)> *)this,pAVar2,
                     pAVar3);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::function<bool (AwardDiffEntry const&, AwardDiffEntry
   const&)> >::TEMPNAMEPLACEHOLDERVALUE(AwardDiffEntry*,
   __gnu_cxx::__normal_iterator<AwardDiffEntry*, std::vector<AwardDiffEntry,
   std::allocator<AwardDiffEntry> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>>
::operator()(_Iter_comp_iter<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>> *this
            ,AwardDiffEntry *param_1,undefined8 param_3)

{
  undefined1 uVar1;
  AwardDiffEntry *pAVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pAVar2 = (AwardDiffEntry *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>::operator()
                    ((function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)> *)this,param_1,
                     pAVar2);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::function<bool (AwardDiffEntry const&, AwardDiffEntry
   const&)> >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<AwardDiffEntry*,
   std::vector<AwardDiffEntry, std::allocator<AwardDiffEntry> > >, AwardDiffEntry*) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>>
::operator()(_Iter_comp_iter<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>> *this
            ,undefined8 param_2,AwardDiffEntry *param_3)

{
  undefined1 uVar1;
  AwardDiffEntry *pAVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pAVar2 = (AwardDiffEntry *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>::operator()
                    ((function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)> *)this,pAVar2,
                     param_3);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::function<bool (AwardDiffEntry const&, AwardDiffEntry
   const&)> >::TEMPNAMEPLACEHOLDERVALUE(AwardDiffEntry*, AwardDiffEntry*) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>>
::operator()(_Iter_comp_iter<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>> *this
            ,AwardDiffEntry *param_1,AwardDiffEntry *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  
  cVar1 = FUN_03856e4c(*(undefined8 *)(this + 0x10));
  if (cVar1 == '\0') {
    nop();
    nop();
    uVar2 = (**(code **)(this + 0x18))(this,extraout_x0,extraout_x0_00);
    return (bool)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_054738e4(cVar1,param_1);
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<TimeLine::Update(float)::{lambda(TimeLineEvent const&,
   TimeLineEvent const&)#1}>::TEMPNAMEPLACEHOLDERVALUE(std::_Deque_iterator<TimeLineEvent,
   TimeLineEvent&, TimeLineEvent*>, std::_Deque_iterator<TimeLineEvent, TimeLineEvent&,
   TimeLineEvent*>) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<TimeLine::Update(float)::{lambda(TimeLineEvent_const&,TimeLineEvent_const&)#1}>::
operator()(_Iter_comp_iter<TimeLine::Update(float)::_lambda(TimeLineEvent_const&,TimeLineEvent_const&)_1_>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  TimeLineEvent *pTVar2;
  TimeLineEvent *pTVar3;
  
  pTVar2 = (TimeLineEvent *)FUN_03868f90(*param_2);
  pTVar3 = (TimeLineEvent *)FUN_03868f90(*param_3);
  uVar1 = TimeLine::Update(float)::{lambda(TimeLineEvent_const&,TimeLineEvent_const&)#1}::operator()
                    ((_lambda_TimeLineEvent_const__TimeLineEvent_const___1_ *)this,pTVar2,pTVar3);
  return (bool)uVar1;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_iter<EntityFinder::BoardEntitySorter_Closest_WeightNewRows>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantGroup**,
   std::vector<PlantGroup*, std::allocator<PlantGroup*> > >,
   __gnu_cxx::__normal_iterator<PlantGroup**, std::vector<PlantGroup*, std::allocator<PlantGroup*> >
   >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<EntityFinder::BoardEntitySorter_Closest_WeightNewRows>::operator()
          (_Iter_comp_iter<EntityFinder::BoardEntitySorter_Closest_WeightNewRows> *this,
          undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = EntityFinder::BoardEntitySorter_Closest_WeightNewRows::operator()
                    ((BoardEntity *)this,(BoardEntity *)*puVar2);
  return (bool)uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity>)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,
   std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > > >,
   __gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,
   std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<bool(*)(Sexy::RtWeakPtr<BoardEntity>,Sexy::RtWeakPtr<BoardEntity>)>::operator()
          (_Iter_comp_iter<bool(*)(Sexy::RtWeakPtr<BoardEntity>,Sexy::RtWeakPtr<BoardEntity>)> *this
          ,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  RtWeakPtrBase *pRVar2;
  code *pcVar3;
  undefined8 local_30;
  undefined8 local_28 [2];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pcVar3 = *(code **)this;
  local_8 = ___stack_chk_guard;
  local_30 = param_3;
  local_28[0] = param_2;
  pRVar2 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar2);
  pRVar2 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar2);
  uVar1 = (*pcVar3)(aRStack_18,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_iter<PlantSorter_LowestHP>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::Point*,
   std::vector<Sexy::Point, std::allocator<Sexy::Point> > >,
   __gnu_cxx::__normal_iterator<Sexy::Point*, std::vector<Sexy::Point, std::allocator<Sexy::Point> >
   >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<PlantSorter_LowestHP>::operator()
          (_Iter_comp_iter<PlantSorter_LowestHP> *this,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  Point *pPVar2;
  Point *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pPVar3 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = PlantSorter_LowestHP::operator()((PlantSorter_LowestHP *)this,pPVar2,pPVar3);
  return (bool)uVar1;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_iter<EntityFinder::BoardEntitySorter_Closest>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Zombie**,
   std::vector<Zombie*, std::allocator<Zombie*> > >, __gnu_cxx::__normal_iterator<Zombie**,
   std::vector<Zombie*, std::allocator<Zombie*> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<EntityFinder::BoardEntitySorter_Closest>::operator()
          (_Iter_comp_iter<EntityFinder::BoardEntitySorter_Closest> *this,undefined8 param_2,
          undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = EntityFinder::BoardEntitySorter_Closest::operator()
                    ((BoardEntity *)this,(BoardEntity *)*puVar2);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(PlayerInfo*,
   PlayerInfo*)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlayerInfo>*,
   std::vector<Sexy::RtWeakPtr<PlayerInfo>, std::allocator<Sexy::RtWeakPtr<PlayerInfo> > > >,
   __gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlayerInfo>*,
   std::vector<Sexy::RtWeakPtr<PlayerInfo>, std::allocator<Sexy::RtWeakPtr<PlayerInfo> > > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(PlayerInfo*,PlayerInfo*)>::operator()
          (_Iter_comp_iter<bool(*)(PlayerInfo*,PlayerInfo*)> *this,undefined8 param_2,
          undefined8 param_3)

{
  undefined1 uVar1;
  RtWeakPtr *pRVar2;
  ResourceInfo *pRVar3;
  ResourceInfo *pRVar4;
  code *pcVar5;
  undefined8 local_10;
  undefined8 local_8;
  
  pcVar5 = *(code **)this;
  local_10 = param_3;
  local_8 = param_2;
  pRVar2 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar2);
  pRVar2 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar2);
  uVar1 = (*pcVar5)(pRVar3,pRVar4);
  return (bool)uVar1;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_iter<DistFromSorter>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BoardEntity**,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> > >,
   __gnu_cxx::__normal_iterator<BoardEntity**, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<DistFromSorter>::operator()
          (_Iter_comp_iter<DistFromSorter> *this,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = DistFromSorter::operator()((BoardEntity *)this,(BoardEntity *)*puVar2);
  return (bool)uVar1;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_iter<DarkWizardTargetSorter>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Zombie**,
   std::vector<Zombie*, std::allocator<Zombie*> > >, __gnu_cxx::__normal_iterator<Zombie**,
   std::vector<Zombie*, std::allocator<Zombie*> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<DarkWizardTargetSorter>::operator()
          (_Iter_comp_iter<DarkWizardTargetSorter> *this,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = DarkWizardTargetSorter::operator()((BoardEntity *)this,(BoardEntity *)*puVar2);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::_Mem_fn<bool
   (EntityFinder::BoardEntitySorter::*)(BoardEntity*, BoardEntity*) const>
   (EntityFinder::BoardEntitySorter*, std::_Placeholder<1>, std::_Placeholder<2>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BoardEntity**, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > >, __gnu_cxx::__normal_iterator<BoardEntity**,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  BoardEntity **ppBVar2;
  BoardEntity **ppBVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  ppBVar2 = (BoardEntity **)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  ppBVar3 = (BoardEntity **)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>
          ::operator()((_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>
                        *)this,ppBVar2,ppBVar3);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(AccessoryPieceUIInfo,
   AccessoryPieceUIInfo)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<AccessoryPieceUIInfo*,
   std::vector<AccessoryPieceUIInfo, std::allocator<AccessoryPieceUIInfo> > >,
   __gnu_cxx::__normal_iterator<AccessoryPieceUIInfo*, std::vector<AccessoryPieceUIInfo,
   std::allocator<AccessoryPieceUIInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(AccessoryPieceUIInfo,AccessoryPieceUIInfo)>::operator()
          (_Iter_comp_iter<bool(*)(AccessoryPieceUIInfo,AccessoryPieceUIInfo)> *this,
          undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  AccessoryPieceUIInfo *pAVar2;
  code *pcVar3;
  undefined8 local_50;
  undefined8 local_48 [2];
  AccessoryPieceUIInfo aAStack_38 [24];
  AccessoryPieceUIInfo aAStack_20 [24];
  long local_8;
  
  pcVar3 = *(code **)this;
  local_8 = ___stack_chk_guard;
  local_50 = param_3;
  local_48[0] = param_2;
  pAVar2 = (AccessoryPieceUIInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
  AccessoryPieceUIInfo::AccessoryPieceUIInfo(aAStack_38,pAVar2);
  pAVar2 = (AccessoryPieceUIInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
  AccessoryPieceUIInfo::AccessoryPieceUIInfo(aAStack_20,pAVar2);
  uVar1 = (*pcVar3)(aAStack_38,aAStack_20);
  AccessoryPieceUIInfo::~AccessoryPieceUIInfo(aAStack_20);
  AccessoryPieceUIInfo::~AccessoryPieceUIInfo(aAStack_38);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<long
   BundleUIDetail::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<long BundleUIDetail::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BundleUIDetail*,
   std::vector<BundleUIDetail, std::allocator<BundleUIDetail> > >,
   __gnu_cxx::__normal_iterator<BundleUIDetail*, std::vector<BundleUIDetail,
   std::allocator<BundleUIDetail> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  BundleUIDetail *pBVar2;
  BundleUIDetail *pBVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pBVar2 = (BundleUIDetail *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pBVar3 = (BundleUIDetail *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10)
  ;
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>
                        *)this,pBVar2,pBVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantAvatarInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantAvatarInfo::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantAvatarInfo*,
   std::vector<PlantAvatarInfo, std::allocator<PlantAvatarInfo> > >,
   __gnu_cxx::__normal_iterator<PlantAvatarInfo*, std::vector<PlantAvatarInfo,
   std::allocator<PlantAvatarInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantAvatarInfo *pPVar2;
  PlantAvatarInfo *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantAvatarInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8)
  ;
  pPVar3 = (PlantAvatarInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::equal_to<int> (std::_Bind<std::_Mem_fn<int
   PlantAvatarInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantAvatarInfo::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantAvatarInfo*,
   std::vector<PlantAvatarInfo, std::allocator<PlantAvatarInfo> > >,
   __gnu_cxx::__normal_iterator<PlantAvatarInfo*, std::vector<PlantAvatarInfo,
   std::allocator<PlantAvatarInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantAvatarInfo *pPVar2;
  PlantAvatarInfo *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantAvatarInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8)
  ;
  pPVar3 = (PlantAvatarInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantAvatarPiecesInfo*,
   std::vector<PlantAvatarPiecesInfo, std::allocator<PlantAvatarPiecesInfo> > >,
   __gnu_cxx::__normal_iterator<PlantAvatarPiecesInfo*, std::vector<PlantAvatarPiecesInfo,
   std::allocator<PlantAvatarPiecesInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantAvatarPiecesInfo *pPVar2;
  PlantAvatarPiecesInfo *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pPVar3 = (PlantAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::equal_to<int> (std::_Bind<std::_Mem_fn<int
   PlantAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantAvatarPiecesInfo*,
   std::vector<PlantAvatarPiecesInfo, std::allocator<PlantAvatarPiecesInfo> > >,
   __gnu_cxx::__normal_iterator<PlantAvatarPiecesInfo*, std::vector<PlantAvatarPiecesInfo,
   std::allocator<PlantAvatarPiecesInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantAvatarPiecesInfo *pPVar2;
  PlantAvatarPiecesInfo *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pPVar3 = (PlantAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<std::string >
   (std::_Bind<std::_Mem_fn<std::string AccessoryPiece::*> (std::_Placeholder<1>)>,
   std::_Bind<std::_Mem_fn<std::string AccessoryPiece::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<AccessoryPiece*,
   std::vector<AccessoryPiece, std::allocator<AccessoryPiece> > >,
   __gnu_cxx::__normal_iterator<AccessoryPiece*, std::vector<AccessoryPiece,
   std::allocator<AccessoryPiece> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  AccessoryPiece *pAVar2;
  AccessoryPiece *pAVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pAVar2 = (AccessoryPiece *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pAVar3 = (AccessoryPiece *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10)
  ;
  bVar1 = std::
          _Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>
                        *)this,pAVar2,pAVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::equal_to<std::string >
   (std::_Bind<std::_Mem_fn<std::string AccessoryPiece::*> (std::_Placeholder<1>)>,
   std::_Bind<std::_Mem_fn<std::string AccessoryPiece::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<AccessoryPiece*,
   std::vector<AccessoryPiece, std::allocator<AccessoryPiece> > >,
   __gnu_cxx::__normal_iterator<AccessoryPiece*, std::vector<AccessoryPiece,
   std::allocator<AccessoryPiece> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::equal_to<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::equal_to<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  AccessoryPiece *pAVar2;
  AccessoryPiece *pAVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pAVar2 = (AccessoryPiece *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pAVar3 = (AccessoryPiece *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10)
  ;
  bVar1 = std::
          _Bind<std::equal_to<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::equal_to<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>
                        *)this,pAVar2,pAVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   MaterialInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int MaterialInfo::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<MaterialInfo*,
   std::vector<MaterialInfo, std::allocator<MaterialInfo> > >,
   __gnu_cxx::__normal_iterator<MaterialInfo*, std::vector<MaterialInfo,
   std::allocator<MaterialInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  MaterialInfo *pMVar2;
  MaterialInfo *pMVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pMVar2 = (MaterialInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pMVar3 = (MaterialInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pMVar2,pMVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::equal_to<int> (std::_Bind<std::_Mem_fn<int
   MaterialInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int MaterialInfo::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<MaterialInfo*,
   std::vector<MaterialInfo, std::allocator<MaterialInfo> > >,
   __gnu_cxx::__normal_iterator<MaterialInfo*, std::vector<MaterialInfo,
   std::allocator<MaterialInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  MaterialInfo *pMVar2;
  MaterialInfo *pMVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pMVar2 = (MaterialInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pMVar3 = (MaterialInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pMVar2,pMVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantNewAvatarPiecesInfo*,
   std::vector<PlantNewAvatarPiecesInfo, std::allocator<PlantNewAvatarPiecesInfo> > >,
   __gnu_cxx::__normal_iterator<PlantNewAvatarPiecesInfo*, std::vector<PlantNewAvatarPiecesInfo,
   std::allocator<PlantNewAvatarPiecesInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantNewAvatarPiecesInfo *pPVar2;
  PlantNewAvatarPiecesInfo *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantNewAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pPVar3 = (PlantNewAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::_Bind<std::equal_to<int> (std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantNewAvatarPiecesInfo*,
   std::vector<PlantNewAvatarPiecesInfo, std::allocator<PlantNewAvatarPiecesInfo> > >,
   __gnu_cxx::__normal_iterator<PlantNewAvatarPiecesInfo*, std::vector<PlantNewAvatarPiecesInfo,
   std::allocator<PlantNewAvatarPiecesInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_iter<std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  PlantNewAvatarPiecesInfo *pPVar2;
  PlantNewAvatarPiecesInfo *pPVar3;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  pPVar2 = (PlantNewAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pPVar3 = (PlantNewAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = std::
          _Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,pPVar3);
  return bVar1;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_iter<FairyTaleWitchTargetSorter>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Plant**,
   std::vector<Plant*, std::allocator<Plant*> > >, __gnu_cxx::__normal_iterator<Plant**,
   std::vector<Plant*, std::allocator<Plant*> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<FairyTaleWitchTargetSorter>::operator()
          (_Iter_comp_iter<FairyTaleWitchTargetSorter> *this,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_3;
  local_8 = param_2;
  puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  uVar1 = FairyTaleWitchTargetSorter::operator()((Plant *)this,(Plant *)*puVar2);
  return (bool)uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(plantInfo,
   plantInfo)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<plantInfo*,
   std::vector<plantInfo, std::allocator<plantInfo> > >, __gnu_cxx::__normal_iterator<plantInfo*,
   std::vector<plantInfo, std::allocator<plantInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(plantInfo,plantInfo)>::operator()
          (_Iter_comp_iter<bool(*)(plantInfo,plantInfo)> *this,undefined8 param_2,undefined8 param_3
          )

{
  undefined1 uVar1;
  plantInfo *ppVar2;
  code *pcVar3;
  undefined8 local_40;
  undefined8 local_38 [2];
  plantInfo apStack_28 [16];
  plantInfo apStack_18 [16];
  long local_8;
  
  pcVar3 = *(code **)this;
  local_8 = ___stack_chk_guard;
  local_40 = param_3;
  local_38[0] = param_2;
  ppVar2 = (plantInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_38);
  plantInfo::plantInfo(apStack_28,ppVar2);
  ppVar2 = (plantInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
  plantInfo::plantInfo(apStack_18,ppVar2);
  uVar1 = (*pcVar3)(apStack_28,apStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)apStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)apStack_28);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

