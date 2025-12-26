void InitThermalTable(void)

{
  if (KeyBoardID == 0xf) {
    if ((EC_FanStuff >> 4 & 1) != 0) {
      if (RealSpeedMode == 0) {
        RealFanMode = 0x1c;
        if (DAT_00080cef != '\0') {
          RealFanMode = 0x1b;
        }
        DAT_00080627 = 0x3f;
        return;
      }
      if (RealSpeedMode == 1) {
        RealFanMode = 0x1b;
        DAT_00080627 = 0x41;
        return;
      }
      if (RealSpeedMode != 2) {
        return;
      }
      RealFanMode = 0x1d;
      return;
    }
    if (RealSpeedMode == 0) {
      RealFanMode = 0x1c;
      if (DAT_00080cef != '\0') {
        RealFanMode = 0x1b;
      }
      DAT_00080627 = 0x3f;
      return;
    }
    if (RealSpeedMode == 1) {
      RealFanMode = 0x1b;
      DAT_00080627 = 0x41;
      return;
    }
    if (RealSpeedMode != 2) {
      return;
    }
    RealFanMode = 0x1d;
    return;
  }
  if (KeyBoardID < 0x10) {
    if (KeyBoardID == 6) {
      if ((EC_FanStuff >> 4 & 1) != 0) {
        if (RealSpeedMode == 0) {
          RealFanMode = 4;
          if (DAT_00080cef != '\0') {
            RealFanMode = 3;
          }
          DAT_00080627 = 0x3f;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = 3;
          DAT_00080627 = 0x41;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = 5;
        return;
      }
      if (RealSpeedMode == 0) {
        RealFanMode = 4;
        if (DAT_00080cef != '\0') {
          RealFanMode = 3;
        }
        DAT_00080627 = 0x3f;
        return;
      }
      if (RealSpeedMode == 1) {
        RealFanMode = 3;
        DAT_00080627 = 0x41;
        return;
      }
      if (RealSpeedMode != 2) {
        return;
      }
      RealFanMode = 5;
      return;
    }
    if (KeyBoardID < 7) {
      if (KeyBoardID == 4) {
        if ((EC_FanStuff >> 4 & 1) != 0) {
          if (RealSpeedMode == 0) {
            RealFanMode = 1;
            if (DAT_00080cef != '\0') {
              RealFanMode = RealSpeedMode;
            }
            DAT_00080627 = 0x3f;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0;
            DAT_00080627 = 0x41;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = RealSpeedMode;
          return;
        }
        if (RealSpeedMode == 0) {
          RealFanMode = 1;
          if (DAT_00080cef != '\0') {
            RealFanMode = RealSpeedMode;
          }
          DAT_00080627 = 0x3f;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = EC_FanStuff >> 4 & 1;
          DAT_00080627 = 0x41;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = RealSpeedMode;
        return;
      }
      if (4 < KeyBoardID) {
        if ((EC_FanStuff >> 4 & 1) != 0) {
          if (RealSpeedMode == 0) {
            RealFanMode = 7;
            if (DAT_00080cef != '\0') {
              RealFanMode = 6;
            }
            DAT_00080627 = 0x3f;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 6;
            DAT_00080627 = 0x41;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 8;
          return;
        }
        if (RealSpeedMode == 0) {
          RealFanMode = 7;
          if (DAT_00080cef != '\0') {
            RealFanMode = 6;
          }
          DAT_00080627 = 0x3f;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = 6;
          DAT_00080627 = 0x41;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = 8;
        return;
      }
      if (KeyBoardID == 3) {
        if ((EC_FanStuff >> 4 & 1) != 0) {
          if (RealSpeedMode == 0) {
            RealFanMode = 0xd;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0xc;
            }
            DAT_00080627 = 0x3f;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0xc;
            DAT_00080627 = 0x41;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0xe;
          return;
        }
        if (RealSpeedMode == 0) {
          RealFanMode = 0xd;
          if (DAT_00080cef != '\0') {
            RealFanMode = 0xc;
          }
          DAT_00080627 = 0x3f;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = 0xc;
          DAT_00080627 = 0x41;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = 0xe;
        return;
      }
    }
    else {
      if (KeyBoardID == 0xc) {
        if ((EC_FanStuff >> 4 & 1) != 0) {
          if (RealSpeedMode == 0) {
            RealFanMode = 0x10;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0xf;
            }
            DAT_00080627 = 0x3f;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0xf;
            DAT_00080627 = 0x41;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x11;
          return;
        }
        if (RealSpeedMode == 0) {
          RealFanMode = 0x10;
          if (DAT_00080cef != '\0') {
            RealFanMode = 0xf;
          }
          DAT_00080627 = 0x3f;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = 0xf;
          DAT_00080627 = 0x41;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = 0x11;
        return;
      }
      if (KeyBoardID < 0xd) {
        if (KeyBoardID == 7) {
          if ((EC_FanStuff >> 4 & 1) != 0) {
            if (RealSpeedMode == 0) {
              RealFanMode = 0x19;
              if (DAT_00080cef != '\0') {
                RealFanMode = 0x18;
              }
              DAT_00080627 = 0x3f;
              return;
            }
            if (RealSpeedMode == 1) {
              RealFanMode = 0x18;
              DAT_00080627 = 0x41;
              return;
            }
            if (RealSpeedMode != 2) {
              return;
            }
            RealFanMode = 0x1a;
            return;
          }
          if (RealSpeedMode == 0) {
            RealFanMode = 0x19;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0x18;
            }
            DAT_00080627 = 0x3f;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0x18;
            DAT_00080627 = 0x41;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x1a;
          return;
        }
      }
      else {
        if (KeyBoardID == 0xd) {
          if ((EC_FanStuff >> 4 & 1) != 0) {
            if (RealSpeedMode == 0) {
              RealFanMode = 10;
              if (DAT_00080cef != '\0') {
                RealFanMode = 9;
              }
              DAT_00080627 = 0x3f;
              return;
            }
            if (RealSpeedMode == 1) {
              RealFanMode = 9;
              DAT_00080627 = 0x41;
              return;
            }
            if (RealSpeedMode != 2) {
              return;
            }
            RealFanMode = 0xb;
            return;
          }
          if (RealSpeedMode == 0) {
            RealFanMode = 10;
            if (DAT_00080cef != '\0') {
              RealFanMode = 9;
            }
            DAT_00080627 = 0x3f;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 9;
            DAT_00080627 = 0x41;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0xb;
          return;
        }
        if (KeyBoardID == 0xe) {
          if ((EC_FanStuff >> 4 & 1) != 0) {
            if (RealSpeedMode == 0) {
              RealFanMode = 0x16;
              if (DAT_00080cef != '\0') {
                RealFanMode = 0x15;
              }
              DAT_00080627 = 0x3f;
              return;
            }
            if (RealSpeedMode == 1) {
              RealFanMode = 0x15;
              DAT_00080627 = 0x41;
              return;
            }
            if (RealSpeedMode != 2) {
              return;
            }
            RealFanMode = 0x17;
            return;
          }
          if (RealSpeedMode == 0) {
            RealFanMode = 0x16;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0x15;
            }
            DAT_00080627 = 0x3f;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0x15;
            DAT_00080627 = 0x41;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x17;
          return;
        }
      }
    }
  }
  else {
    if (KeyBoardID == 0x14) {
      if ((EC_FanStuff >> 4 & 1) != 0) {
        if (RealSpeedMode == 0) {
          RealFanMode = 0x13;
          if (DAT_00080cef != '\0') {
            RealFanMode = 0x12;
          }
          DAT_00080627 = 0x34;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = 0x12;
          DAT_00080627 = 0x39;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = KeyBoardID;
        return;
      }
      if (RealSpeedMode == 0) {
        RealFanMode = 0x13;
        if (DAT_00080cef != '\0') {
          RealFanMode = 0x12;
        }
        DAT_00080627 = 0x34;
        return;
      }
      if (RealSpeedMode == 1) {
        RealFanMode = 0x12;
        DAT_00080627 = 0x39;
        return;
      }
      if (RealSpeedMode != 2) {
        return;
      }
      RealFanMode = KeyBoardID;
      return;
    }
    if (KeyBoardID < 0x15) {
      if (KeyBoardID == 0x11) {
        if ((EC_FanStuff >> 4 & 1) != 0) {
          if (RealSpeedMode == 0) {
            RealFanMode = 0x22;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0x21;
            }
            DAT_00080627 = 0x34;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0x21;
            DAT_00080627 = 0x39;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x23;
          return;
        }
        if (RealSpeedMode == 0) {
          RealFanMode = 0x22;
          if (DAT_00080cef != '\0') {
            RealFanMode = 0x21;
          }
          DAT_00080627 = 0x34;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = 0x21;
          DAT_00080627 = 0x39;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = 0x23;
        return;
      }
      if (KeyBoardID < 0x11) {
        if ((EC_FanStuff >> 4 & 1) != 0) {
          if (RealSpeedMode == 0) {
            RealFanMode = 0x13;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0x12;
            }
            DAT_00080627 = 0x34;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0x12;
            DAT_00080627 = 0x39;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x14;
          return;
        }
        if (RealSpeedMode == 0) {
          RealFanMode = 0x13;
          if (DAT_00080cef != '\0') {
            RealFanMode = 0x12;
          }
          DAT_00080627 = 0x34;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = 0x12;
          DAT_00080627 = 0x39;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = 0x14;
        return;
      }
      if (KeyBoardID == 0x12) {
        if ((EC_FanStuff >> 4 & 1) != 0) {
          if (RealSpeedMode == 0) {
            RealFanMode = 0x1f;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0x1e;
            }
            DAT_00080627 = 0x34;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0x1e;
            DAT_00080627 = 0x39;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x20;
          return;
        }
        if (RealSpeedMode == 0) {
          RealFanMode = 0x1f;
          if (DAT_00080cef != '\0') {
            RealFanMode = 0x1e;
          }
          DAT_00080627 = 0x34;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = 0x1e;
          DAT_00080627 = 0x39;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = 0x20;
        return;
      }
    }
    else {
      if (KeyBoardID == 0x18) {
        if ((EC_FanStuff >> 4 & 1) != 0) {
          if (RealSpeedMode == 0) {
            RealFanMode = 0x13;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0x12;
            }
            DAT_00080627 = 0x34;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0x12;
            DAT_00080627 = 0x39;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x14;
          return;
        }
        if (RealSpeedMode == 0) {
          RealFanMode = 0x13;
          if (DAT_00080cef != '\0') {
            RealFanMode = 0x12;
          }
          DAT_00080627 = 0x34;
          return;
        }
        if (RealSpeedMode == 1) {
          RealFanMode = 0x12;
          DAT_00080627 = 0x39;
          return;
        }
        if (RealSpeedMode != 2) {
          return;
        }
        RealFanMode = 0x14;
        return;
      }
      if (KeyBoardID < 0x19) {
        if (KeyBoardID == 0x16) {
          if ((EC_FanStuff >> 4 & 1) != 0) {
            if (RealSpeedMode == 0) {
              RealFanMode = 0x1f;
              if (DAT_00080cef != '\0') {
                RealFanMode = 0x1e;
              }
              DAT_00080627 = 0x34;
              return;
            }
            if (RealSpeedMode == 1) {
              RealFanMode = 0x1e;
              DAT_00080627 = 0x39;
              return;
            }
            if (RealSpeedMode != 2) {
              return;
            }
            RealFanMode = 0x20;
            return;
          }
          if (RealSpeedMode == 0) {
            RealFanMode = 0x1f;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0x1e;
            }
            DAT_00080627 = 0x34;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0x1e;
            DAT_00080627 = 0x39;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x20;
          return;
        }
      }
      else {
        if (KeyBoardID == 0x19) {
          if ((EC_FanStuff >> 4 & 1) != 0) {
            if (RealSpeedMode == 0) {
              RealFanMode = 0x22;
              if (DAT_00080cef != '\0') {
                RealFanMode = 0x21;
              }
              DAT_00080627 = 0x34;
              return;
            }
            if (RealSpeedMode == 1) {
              RealFanMode = 0x21;
              DAT_00080627 = 0x39;
              return;
            }
            if (RealSpeedMode != 2) {
              return;
            }
            RealFanMode = 0x23;
            return;
          }
          if (RealSpeedMode == 0) {
            RealFanMode = 0x22;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0x21;
            }
            DAT_00080627 = 0x34;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0x21;
            DAT_00080627 = 0x39;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x23;
          return;
        }
        if (KeyBoardID == 0x1a) {
          if ((EC_FanStuff >> 4 & 1) != 0) {
            if (RealSpeedMode == 0) {
              RealFanMode = 0x1f;
              if (DAT_00080cef != '\0') {
                RealFanMode = 0x1e;
              }
              DAT_00080627 = 0x34;
              return;
            }
            if (RealSpeedMode == 1) {
              RealFanMode = 0x1e;
              DAT_00080627 = 0x39;
              return;
            }
            if (RealSpeedMode != 2) {
              return;
            }
            RealFanMode = 0x20;
            return;
          }
          if (RealSpeedMode == 0) {
            RealFanMode = 0x1f;
            if (DAT_00080cef != '\0') {
              RealFanMode = 0x1e;
            }
            DAT_00080627 = 0x34;
            return;
          }
          if (RealSpeedMode == 1) {
            RealFanMode = 0x1e;
            DAT_00080627 = 0x39;
            return;
          }
          if (RealSpeedMode != 2) {
            return;
          }
          RealFanMode = 0x20;
          return;
        }
      }
    }
  }
  if ((EC_FanStuff >> 4 & 1) == 0) {
    if (RealSpeedMode == 0) {
      RealFanMode = 1;
      if (DAT_00080cef != '\0') {
        RealFanMode = RealSpeedMode;
      }
      DAT_00080627 = 0x3f;
    }
    else if (RealSpeedMode == 1) {
      DAT_00080627 = 0x41;
      RealFanMode = EC_FanStuff >> 4 & 1;
    }
    else if (RealSpeedMode == 2) {
      RealFanMode = RealSpeedMode;
    }
  }
  else if (RealSpeedMode == 0) {
    RealFanMode = 1;
    if (DAT_00080cef != '\0') {
      RealFanMode = RealSpeedMode;
    }
    DAT_00080627 = 0x3f;
  }
  else if (RealSpeedMode == 1) {
    RealFanMode = 0;
    DAT_00080627 = 0x41;
  }
  else if (RealSpeedMode == 2) {
    RealFanMode = RealSpeedMode;
  }
  return;
}
