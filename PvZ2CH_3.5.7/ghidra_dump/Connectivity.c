// Class: Connectivity


/* Connectivity::IsConnectedOnWifi() */

bool Connectivity::IsConnectedOnWifi(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(Sexy::gSexyApp + 0x48) + 0x20))
                    (*(long **)(Sexy::gSexyApp + 0x48));
  return iVar1 == 2;
}


/* Connectivity::IsConnectedOnEthernet() */

bool Connectivity::IsConnectedOnEthernet(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(Sexy::gSexyApp + 0x48) + 0x20))
                    (*(long **)(Sexy::gSexyApp + 0x48));
  return iVar1 == 4;
}


/* Connectivity::IsConnectedOnWWAN() */

bool Connectivity::IsConnectedOnWWAN(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(Sexy::gSexyApp + 0x48) + 0x20))
                    (*(long **)(Sexy::gSexyApp + 0x48));
  return iVar1 == 1;
}


/* Connectivity::IsConnected() */

undefined8 Connectivity::IsConnected(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsConnectedOnWifi();
  if ((cVar1 == '\0') && (cVar1 = IsConnectedOnWWAN(), cVar1 == '\0')) {
    uVar2 = IsConnectedOnEthernet();
    return uVar2;
  }
  return 1;
}

