// Class: CurrentSelectedPlantPacketInfo


/* CurrentSelectedPlantPacketInfo::CurrentSelectedPlantPacketInfo(int, NewPVPPlantPacketInfo const&)
    */

void __thiscall
CurrentSelectedPlantPacketInfo::CurrentSelectedPlantPacketInfo
          (CurrentSelectedPlantPacketInfo *this,int param_1,NewPVPPlantPacketInfo *param_2)

{
  *(undefined8 *)(this + 4) = *(undefined8 *)param_2;
  *(int *)this = param_1;
  return;
}

