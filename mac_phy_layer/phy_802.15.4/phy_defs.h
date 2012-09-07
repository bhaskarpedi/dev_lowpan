/*
 * File: phy_defs.h
 * 
 * Description:
 * 		This file constitutes of the following
 * 		1. enum definitions from 802.15.4
 * 		2. Forward declarations of the PIB variables
 * 		3. Macro mappings of the PIB variables
 *
 * Author: Bhaskar Pediredla
 */

#ifdef UNCOMMENT

typedef enum ieee154_phy_status
{
IEEE154_PHY__BUSY			=0x00,
IEEE154_PHY__BUSY_RX		=0x01,
IEEE154_PHY__BUSY_TX		=0x02,
IEEE154_PHY__FORCE_TRX_OFF=0x03,
IEEE154_PHY__IDLE			=0x04,
IEEE154_PHY__INVALID_PARAMETER=0x05,
IEEE154_PHY__RX_ON		=0x06,
IEEE154_PHY__SUCCESS		=0x07,
IEEE154_PHY__TRX_OFF		=0x08,
IEEE154_PHY__TX_ON		=0x09,
IEEE154_PHY__UNSUPPORTED_ATTRIBUTE=0x0A
}ieee_154_phy_status_t;



