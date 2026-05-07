// Class: PlanetMeteorInfo


/* PlanetMeteorInfo::PlanetMeteorInfo(bool, Sexy::Point const&) */

void __thiscall
PlanetMeteorInfo::PlanetMeteorInfo(PlanetMeteorInfo *this,bool param_1,Point *param_2)

{
  *this = (PlanetMeteorInfo)param_1;
  Sexy::Point::Point((Point *)(this + 4),(TPoint *)param_2);
  return;
}


/* PlanetMeteorInfo::PlanetMeteorInfo(PlanetMeteorInfo const&) */

void __thiscall PlanetMeteorInfo::PlanetMeteorInfo(PlanetMeteorInfo *this,PlanetMeteorInfo *param_1)

{
  *this = *param_1;
  Sexy::Point::Point((Point *)(this + 4),(TPoint *)(param_1 + 4));
  return;
}

