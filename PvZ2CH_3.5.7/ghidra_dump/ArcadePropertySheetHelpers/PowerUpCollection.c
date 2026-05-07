// Class: ArcadePropertySheetHelpers::PowerUpCollection


/* ArcadePropertySheetHelpers::PowerUpCollection::~PowerUpCollection() */

void __thiscall
ArcadePropertySheetHelpers::PowerUpCollection::~PowerUpCollection(PowerUpCollection *this)

{
  std::
  vector<ArcadePropertySheetHelpers::PowerUpMetaData,std::allocator<ArcadePropertySheetHelpers::PowerUpMetaData>>
  ::~vector((vector<ArcadePropertySheetHelpers::PowerUpMetaData,std::allocator<ArcadePropertySheetHelpers::PowerUpMetaData>>
             *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* ArcadePropertySheetHelpers::PowerUpCollection::PowerUpCollection(ArcadePropertySheetHelpers::PowerUpCollection
   const&) */

void __thiscall
ArcadePropertySheetHelpers::PowerUpCollection::PowerUpCollection
          (PowerUpCollection *this,PowerUpCollection *param_1)

{
  FUN_05475d88();
  std::
  vector<ArcadePropertySheetHelpers::PowerUpMetaData,std::allocator<ArcadePropertySheetHelpers::PowerUpMetaData>>
  ::vector((vector<ArcadePropertySheetHelpers::PowerUpMetaData,std::allocator<ArcadePropertySheetHelpers::PowerUpMetaData>>
            *)(this + 8),(vector *)(param_1 + 8));
  return;
}


/* ArcadePropertySheetHelpers::PowerUpCollection::ContainsPowerUpID(std::string const&) const */

bool __thiscall
ArcadePropertySheetHelpers::PowerUpCollection::ContainsPowerUpID
          (PowerUpCollection *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = ContainsID<ArcadePropertySheetHelpers::PowerUpMetaData>((vector *)(this + 8),param_1);
  return bVar1;
}


/* ArcadePropertySheetHelpers::PowerUpCollection::GetPowerUpByID(std::string const&) const */

void __thiscall
ArcadePropertySheetHelpers::PowerUpCollection::GetPowerUpByID
          (PowerUpCollection *this,string *param_1)

{
  GetByID<ArcadePropertySheetHelpers::PowerUpMetaData>((vector *)(this + 8),param_1);
  return;
}

