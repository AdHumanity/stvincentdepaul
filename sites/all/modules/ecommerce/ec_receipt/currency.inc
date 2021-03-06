<?php

/**
 * @file
 * List of currencies available.
 */

/**
 * Return a list of all currencies.
 */
function ec_receipt_get_all_currencies() {
  return array(
    'AED' => "AED - United Arab Emirates dirham",
    'AFN' => "AFN - Afghani",
    'ALL' => "ALL - Lek",
    'AMD' => "AMD - Armenian Dram",
    'ANG' => "ANG - Netherlands Antillian Guilder",
    'AOA' => "AOA - Kwanza",
    'ARS' => "ARS - Argentine Peso",
    'AUD' => "AUD - Australian Dollar",
    'AWG' => "AWG - Aruban Guilder",
    'AZN' => "AZN - Azerbaijanian Manat",
    'BAM' => "BAM - Convertible Marks",
    'BBD' => "BBD - Barbados Dollar",
    'BDT' => "BDT - Bangladeshi Taka",
    'BGN' => "BGN - Bulgarian Lev",
    'BHD' => "BHD - Bahraini Dinar",
    'BIF' => "BIF - Burundian Franc",
    'BMD' => "BMD - Bermudian Dollar (customarily known as Bermuda Dollar)",
    'BND' => "BND - Brunei Dollar",
    'BOB' => "BOB - Boliviano",
    'BOV' => "BOV - Bolivian Mvdol (Funds code)",
    'BRL' => "BRL - Brazilian Real",
    'BSD' => "BSD - Bahamian Dollar",
    'BTN' => "BTN - Ngultrum",
    'BWP' => "BWP - Pula",
    'BYR' => "BYR - Belarussian Ruble",
    'BZD' => "BZD - Belize Dollar",
    'CAD' => "CAD - Canadian Dollar",
    'CDF' => "CDF - Franc Congolais",
    'CHE' => "CHE - WIR Euro (complementary currency)",
    'CHF' => "CHF - Swiss Franc",
    'CHW' => "CHW - WIR Franc (complementary currency)",
    'CLF' => "CLF - Unidades de formento (Funds code)",
    'CLP' => "CLP - Chilean Peso",
    'CNY' => "CNY - Yuan Renminbi",
    'COP' => "COP - Colombian Peso",
    'COU' => "COU - Unidad de Valor Real",
    'CRC' => "CRC - Costa Rican Colon",
    'CUP' => "CUP - Cuban Peso",
    'CVE' => "CVE - Cape Verde Escudo",
    'CYP' => "CYP - Cyprus Pound",
    'CZK' => "CZK - Czech Koruna",
    'DJF' => "DJF - Djibouti Franc",
    'DKK' => "DKK - Danish Krone",
    'DOP' => "DOP - Dominican Peso",
    'DZD' => "DZD - Algerian Dinar",
    'EEK' => "EEK - Kroon",
    'EGP' => "EGP - Egyptian Pound",
    'ERN' => "ERN - Nakfa",
    'ETB' => "ETB - Ethiopian Birr",
    'EUR' => "EUR - Euro",
    'FJD' => "FJD - Fiji Dollar",
    'FKP' => "FKP - Falkland Islands Pound",
    'GBP' => "GBP - Pound Sterling",
    'GEL' => "GEL - Lari",
    'GHS' => "GHS - Cedi",
    'GIP' => "GIP - Gibraltar pound",
    'GMD' => "GMD - Dalasi",
    'GNF' => "GNF - Guinea Franc",
    'GTQ' => "GTQ - Quetzal",
    'GYD' => "GYD - Guyana Dollar",
    'HKD' => "HKD - Hong Kong Dollar",
    'HNL' => "HNL - Lempira",
    'HRK' => "HRK - Croatian Kuna",
    'HTG' => "HTG - Haiti Gourde",
    'HUF' => "HUF - Forint",
    'IDR' => "IDR - Rupiah",
    'ILS' => "ILS - New Israeli Shekel",
    'INR' => "INR - Indian Rupee",
    'IQD' => "IQD - Iraqi Dinar",
    'IRR' => "IRR - Iranian Rial",
    'ISK' => "ISK - Iceland Krona",
    'JMD' => "JMD - Jamaican Dollar",
    'JOD' => "JOD - Jordanian Dinar",
    'JPY' => "JPY - Japanese yen",
    'KES' => "KES - Kenyan Shilling",
    'KGS' => "KGS - Som",
    'KHR' => "KHR - Riel",
    'KMF' => "KMF - Comoro Franc",
    'KPW' => "KPW - North Korean Won",
    'KRW' => "KRW - South Korean Won",
    'KWD' => "KWD - Kuwaiti Dinar",
    'KYD' => "KYD - Cayman Islands Dollar",
    'KZT' => "KZT - Tenge",
    'LAK' => "LAK - Kip",
    'LBP' => "LBP - Lebanese Pound",
    'LKR' => "LKR - Sri Lanka Rupee",
    'LRD' => "LRD - Liberian Dollar",
    'LSL' => "LSL - Loti",
    'LTL' => "LTL - Lithuanian Litas",
    'LVL' => "LVL - Latvian Lats",
    'LYD' => "LYD - Libyan Dinar",
    'MAD' => "MAD - Moroccan Dirham",
    'MDL' => "MDL - Moldovan Leu",
    'MGA' => "MGA - Malagasy Ariary",
    'MKD' => "MKD - Denar",
    'MMK' => "MMK - Kyat",
    'MNT' => "MNT - Tugrik",
    'MOP' => "MOP - Pataca",
    'MRO' => "MRO - Ouguiya",
    'MTL' => "MTL - Maltese Lira",
    'MUR' => "MUR - Mauritius Rupee",
    'MVR' => "MVR - Rufiyaa",
    'MWK' => "MWK - Kwacha",
    'MXN' => "MXN - Mexican Peso",
    'MXV' => "MXV - Mexican Unidad de Inversion (UDI) (Funds code)",
    'MYR' => "MYR - Malaysian Ringgit",
    'MZN' => "MZN - Metical",
    'NAD' => "NAD - Namibian Dollar",
    'NGN' => "NGN - Naira",
    'NIO' => "NIO - Cordoba Oro",
    'NOK' => "NOK - Norwegian Krone",
    'NPR' => "NPR - Nepalese Rupee",
    'NZD' => "NZD - New Zealand Dollar",
    'OMR' => "OMR - Rial Omani",
    'PAB' => "PAB - Balboa",
    'PEN' => "PEN - Nuevo Sol",
    'PGK' => "PGK - Kina",
    'PHP' => "PHP - Philippine Peso",
    'PKR' => "PKR - Pakistan Rupee",
    'PLN' => "PLN - Zloty",
    'PYG' => "PYG - Guarani",
    'QAR' => "QAR - Qatari Rial",
    'ROL' => "ROL - Romanian Leu",
    'RON' => "RON - Romanian New Leu",
    'RSD' => "RSD - Serbian Dinar",
    'RUB' => "RUB - Russian Ruble",
    'RWF' => "RWF - Rwanda Franc",
    'SAR' => "SAR - Saudi Riyal",
    'SBD' => "SBD - Solomon Islands Dollar",
    'SCR' => "SCR - Seychelles Rupee",
    'SDG' => "SDG - Sudanese Pound",
    'SEK' => "SEK - Swedish Krona",
    'SGD' => "SGD - Singapore Dollar",
    'SHP' => "SHP - Saint Helena Pound",
    'SKK' => "SKK - Slovak Koruna",
    'SLL' => "SLL - Leone",
    'SOS' => "SOS - Somali Shilling",
    'SRD' => "SRD - Surinam Dollar",
    'STD' => "STD - Dobra",
    'SYP' => "SYP - Syrian Pound",
    'SZL' => "SZL - Lilangeni",
    'THB' => "THB - Baht",
    'TJS' => "TJS - Somoni",
    'TMM' => "TMM - Manat",
    'TND' => "TND - Tunisian Dinar",
    'TOP' => "TOP - Pa'anga",
    'TRY' => "TRY - New Turkish Lira",
    'TTD' => "TTD - Trinidad and Tobago Dollar",
    'TWD' => "TWD - New Taiwan Dollar",
    'TZS' => "TZS - Tanzanian Shilling",
    'UAH' => "UAH - Hryvnia",
    'UGX' => "UGX - Uganda Shilling",
    'USD' => "USD - US Dollar",
    'USN' => "USN - ",
    'USS' => "USS - ",
    'UYU' => "UYU - Peso Uruguayo",
    'UZS' => "UZS - Uzbekistan Som",
    'VEB' => "VEB - Venezuelan bol�var",
    'VND' => "VND - Vietnamese __ng",
    'VUV' => "VUV - Vatu",
    'WST' => "WST - Samoan Tala",
    'XAF' => "XAF - CFA Franc BEAC",
    'XAG' => "XAG - Silver (one Troy ounce)",
    'XAU' => "XAU - Gold (one Troy ounce)",
    'XBA' => "XBA - European Composite Unit (EURCO) (Bonds market unit)",
    'XBB' => "XBB - European Monetary Unit (E.M.U.-6) (Bonds market unit)",
    'XBC' => "XBC - European Unit of Account 9 (E.U.A.-9) (Bonds market unit)",
    'XBD' => "XBD - European Unit of Account 17 (E.U.A.-17) (Bonds market unit)",
    'XCD' => "XCD - East Caribbean Dollar",
    'XDR' => "XDR - Special Drawing Rights",
    'XFO' => "XFO - Gold franc (special settlement currency)",
    'XFU' => "XFU - UIC franc (special settlement currency)",
    'XOF' => "XOF - CFA Franc BCEAO",
    'XPD' => "XPD - Palladium (one Troy ounce)",
    'XPF' => "XPF - CFP franc",
    'XPT' => "XPT - Platinum (one Troy ounce)",
    'XTS' => "XTS - Code reserved for testing purposes",
    'XXX' => "XXX - No currency",
    'YER' => "YER - Yemeni Rial",
    'ZAR' => "ZAR - South African Rand",
    'ZMK' => "ZMK - Kwacha",
    'ZWD' => "ZWD - Zimbabwe Dollar",
  );
}
