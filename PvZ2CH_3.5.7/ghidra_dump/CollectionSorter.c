// Class: CollectionSorter


/* CollectionSorter::TEMPNAMEPLACEHOLDERVALUE(LevelBasedSelectInfo const&, LevelBasedSelectInfo
   const&) const */

bool __thiscall
CollectionSorter::operator()
          (CollectionSorter *this,LevelBasedSelectInfo *param_1,LevelBasedSelectInfo *param_2)

{
  return *(int *)(param_2 + 8) < *(int *)(param_1 + 8);
}

