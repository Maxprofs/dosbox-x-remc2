
#include "dos_inc.h"

static const unsigned char bin_append_exe[] = {
0x4d,0x5a,0x2b,0x00,0x07,0x00,0x01,0x00,0x02,0x00,0xb2,0x01,0xb2,0x01,0x22,0x01,
0x08,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x02,0x00,0xc0,0x00,
0xb9,0xda,0x05,0xbe,0xb2,0x0b,0x89,0xf7,0x1e,0xa9,0xb5,0x80,0x8c,0xc8,0x05,0x05,
0x00,0x8e,0xd8,0x05,0x6b,0x00,0x8e,0xc0,0xfd,0xf3,0xa5,0xfc,0x2e,0x80,0x6c,0x12,
0x10,0x73,0xe7,0x92,0xaf,0xad,0x0e,0x0e,0x06,0x1f,0x07,0x16,0xbd,0x0e,0x00,0xbb,
0xdf,0x80,0x55,0xcb,0x00,0x55,0x50,0x58,0x21,0x0b,0x03,0x03,0x08,0x48,0xb7,0xd0,
0x8c,0x27,0xf8,0x3a,0xbb,0x05,0x12,0x00,0x2d,0x0b,0x00,0x25,0x12,0x00,0x00,0x27,
0x90,0x00,0x00,0x1f,0x03,0x53,0x45,0x54,0xba,0x0e,0x03,0x20,0xef,0x00,0x41,0x50,
0x50,0x45,0xff,0x4e,0x44,0x3d,0x0d,0x53,0x51,0x06,0x8e,0xfd,0xc3,0x26,0x8b,0x1e,
0x16,0x00,0x8f,0x06,0x2c,0x00,0x2e,0xfb,0x89,0x1e,0x80,0x01,0x4b,0x0c,0x1f,0x03,
0x00,0xb1,0x04,0xdd,0xd3,0xe3,0x10,0x82,0xff,0x01,0x07,0x59,0x5b,0xc3,0x2e,0xc6,
0x06,0xff,0x03,0x0d,0x00,0x1e,0x06,0x56,0x57,0x51,0xff,0x50,0x8c,0xc9,0x8e,0xc1,
0x2e,0x8b,0x0e,0x6e,0x18,0x2e,0x8e,0xef,0x2e,0x31,0xf6,0x3e,0x80,0xff,0x3c,0x00,
0x74,0x26,0x51,0xbf,0xfc,0x0c,0xff,0xb9,0x07,0x00,0xfc,0xf3,0xa6,0x59,0x75,0xed,
0x0f,0x81,0xe9,0x09,0xff,0xbf,0x03,0x0d,0xac,0xaa,0x08,0xc0,0x74,0xfe,0x0c,0xe2,
0xf8,0x3e,0x8a,0x04,0x46,0x6f,0xd6,0xe2,0xf6,0x58,0xff,0x59,0x5f,0x5e,0x07,0x1f,
0xc3,0x9c,0x51,0xff,0x53,0x57,0x56,0x06,0x1e,0x0e,0x1f,0xbe,0xdb,0x84,0x01,0x4a,
0x3e,0xcb,0xa4,0x05,0x06,0xf7,0xa6,0x05,0xb9,0x04,0x3e,0x77,0xa4,0xbe,0x88,0x12,
0xcf,0xa8,0xaa,0xfd,0x05,0x47,0x89,0xfb,0xb9,0x10,0x8b,0x15,0x4d,0x6f,0x2e,0x67,
0xfb,0x18,0x4f,0x30,0xc9,0xfc,0x57,0x1f,0x04,0xfe,0xc1,0xeb,0xff,0xf6,0x4f,0x26,
0xc6,0x05,0x0d,0x89,0xdf,0xff,0x26,0x00,0x0d,0x1f,0x07,0x5e,0x5f,0x5b,0xe1,0x59,
0x9d,0xc3,0x6b,0xa6,0x80,0xf7,0x58,0x3a,0x4f,0x4e,0x04,0xff,0x46,0x46,0x00,0x50,
0x41,0x54,0x48,0x7b,0x0d,0x07,0x37,0x10,0x5a,0x00,0x7b,0xdf,0xc9,0x06,0x1f,0x2e,
0xc4,0xed,0x3e,0x70,0x02,0x4a,0xfd,0x3c,0x0d,0x74,0x02,0xeb,0xf8,0xad,0x94,0x3e,
0xfd,0xc3,0x50,0x52,0x1e,0x2e,0xf7,0xbf,0xe8,0x0e,0x00,0x40,0x74,0x03,0xed,0xe8,
0x0b,0xff,0x70,0xbb,0x3e,0xf4,0x75,0x0c,0x6f,0xa6,0xba,0x05,0x0e,0xff,0xb4,0x09,
0xcd,0x21,0xe9,0x0a,0x00,0x56,0xdd,0xbe,0xfc,0x0f,0xe8,0xfe,0x7a,0x00,0x5e,0x1f,
0x5a,0x58,0xc3,0xd7,0x89,0x3d,0x76,0x0a,0x3c,0x09,0x8c,0xf6,0x3c,0x20,0x75,0x45,
0xf6,0xf1,0x4e,0xc3,0x58,0xb6,0x5c,0x50,0x17,0x58,0x52,0xe8,0xee,0x9a,0xff,0x0e,
0x61,0x94,0x36,0x37,0x3a,0x6d,0x02,0x00,0xf6,0xf8,0xe8,0xd2,0xff,0x2b,0x85,0x19,
0xff,0x2e,0xf6,0x06,0x90,0x02,0x80,0x74,0x27,0xff,0xe8,0x92,0xff,0xf8,0xe9,0x20,
0x00,0xe8,0xbb,0xbc,0x15,0x74,0x19,0x0b,0x67,0x36,0xb7,0x6e,0x8a,0x3c,0x2f,0xff,
0x74,0x08,0x4e,0xe8,0x6c,0x00,0x72,0x14,0xff,0xeb,0xe7,0xe8,0x2a,0x01,0x72,0x0d,
0xeb,0xb9,0xe0,0x2e,0xb7,0x3c,0xff,0x8d,0x70,0xcc,0xfe,0x5a,0xb6,0x86,0x58,0xa3,
0x86,0x3c,0x6e,0x5f,0x52,0xac,0xef,0xff,0x08,0x88,0xc2,0xb4,0xb7,0x02,0x93,0xeb,
0xf3,0xdf,0xb2,0x0d,0x07,0xb2,0xbd,0x0a,0x05,0xbb,0x93,0x5e,0xc3,0x8a,0x77,0x74,
0x0e,0x4a,0x5d,0x0a,0x9a,0x06,0x35,0x02,0xbf,0x2b,0xc3,0xac,0xe8,0xe9,0xff,0x7b,
0xe5,0x9f,0x7e,0xe8,0xf3,0xff,0x3e,0xc6,0x14,0x67,0x2b,0x61,0x70,0xb8,0xe8,0xb4,
0xff,0x5d,0xd8,0x8a,0x26,0xbd,0x8f,0xf6,0xc4,0x10,0xad,0xe5,0x04,0xfb,0x02,0x75,
0x07,0xe8,0x14,0xa9,0x70,0xe9,0x0f,0xae,0xe8,0xf2,0x91,0x26,0x6f,0xea,0xcc,0xff,
0xf9,0x6e,0x25,0x80,0x0e,0x58,0x10,0x6b,0xe8,0x3b,0x27,0x78,0xe8,0xb1,0xff,0xcf,
0x0d,0xe9,0x1e,0x0a,0x48,0x1f,0xe4,0x3c,0x61,0xb7,0x72,0x67,0x7a,0x77,0xfd,0x02,
0x2c,0x20,0xaa,0xe8,0x82,0xf0,0x66,0xed,0xbf,0x94,0x45,0xff,0x00,0x4e,0x5f,0x08,
0x4b,0x76,0x0e,0xf4,0x0c,0x06,0x22,0x0a,0xd1,0x73,0xbd,0x0e,0x1c,0x80,0xfb,0xb6,
0x34,0x08,0x04,0xb7,0x35,0x03,0x80,0xf0,0xeb,0x20,0x38,0xd8,0xb1,0x17,0x46,0xdd,
0x23,0xe8,0x44,0xff,0xcf,0x23,0x99,0xba,0x46,0x23,0x04,0xcb,0x57,0xee,0x26,0x8a,
0x1d,0x23,0xff,0x10,0x46,0x47,0xe2,0xe8,0x09,0xc9,0x75,0xbe,0x08,0x2a,0x19,0x5d,
0x08,0x9c,0x98,0x2b,0x5f,0xf3,0xb0,0x3f,0xe8,0xaa,0xff,0xff,0x75,0x06,0xe8,0x0c,
0x01,0xe9,0x61,0xfb,0x00,0xb0,0x58,0xe8,0x9d,0x0c,0xfc,0x87,0x00,0xe9,0x54,0xbc,
0x45,0xe8,0x90,0xf2,0x4b,0xe3,0x47,0x00,0x5f,0xad,0xbf,0x9e,0xdf,0xe8,0xa3,0x10,
0x84,0x2c,0x36,0xb2,0x05,0xcb,0x79,0x92,0x3c,0x7f,0xb2,0x25,0xcb,0x07,0x7f,0x2c,
0x81,0xf2,0x89,0xcb,0x14,0x08,0x2c,0x87,0xb3,0x70,0xca,0x93,0x97,0x15,0xe8,0xb5,
0x84,0x00,0x33,0x36,0xd0,0xb6,0x86,0xa7,0xd6,0x0d,0x08,0xcd,0x02,0x9e,0x3c,0x10,
0xd8,0x95,0x00,0x4f,0x2d,0x03,0x2e,0xdf,0x81,0x0e,0xfd,0xf8,0x91,0xc3,0xba,0x04,
0x1a,0x7a,0x41,0x93,0x01,0x97,0x80,0xe8,0xe2,0xd8,0xff,0x9c,0x12,0xec,0x04,0x9d,
0x26,0xbb,0x53,0x41,0x06,0x05,0x59,0x26,0x72,0xff,0x7f,0x0c,0x08,0xd2,0x38,0x0c,
0x09,0x9d,0x30,0x80,0x1a,0xc9,0x1d,0x6f,0x35,0x94,0xcf,0x3c,0xc4,0x60,0x98,0x50,
0xc1,0xf2,0xd1,0x12,0x0e,0xf0,0xfd,0x32,0x02,0xf6,0xb1,0xfd,0x1b,0xac,0x9e,0x2f,
0x80,0xfc,0x8d,0xae,0x3b,0x6f,0x04,0xb7,0x74,0x5d,0x85,0x2e,0xe8,0xfb,0xa0,0x05,
0x81,0xfa,0xff,0xfc,0x69,0xf5,0x79,0x42,0x76,0xed,0xe8,0xbf,0x04,0xdb,0xec,0xb0,
0x59,0x3c,0xfb,0x01,0x75,0xe5,0xe8,0xb3,0x0b,0x6f,0xe0,0x44,0x1a,0xb8,0x9b,0xbc,
0x8c,0x1e,0x2b,0x09,0x73,0x1e,0xa8,0xcb,0xaa,0xc6,0x0e,0xed,0xbb,0x5c,0x56,0x31,
0xe3,0xc9,0x43,0x8a,0xf1,0x7b,0x2b,0x0e,0xac,0x13,0x76,0x03,0x1e,0x04,0xff,0x43,
0x1e,0x07,0x89,0xde,0xe8,0xdc,0xd7,0xfc,0x5e,0x51,0x35,0x45,0xb3,0x4c,0x03,0x8d,
0x74,0xf6,0x04,0xb8,0xfd,0xfd,0x07,0xf6,0x03,0x75,0x16,0xbf,0xfb,0x36,0x2d,0x07,
0x01,0x48,0x79,0x3e,0x29,0x07,0x7f,0x06,0x2b,0x07,0x0e,0x07,0xbf,0xdb,0x63,0x07,
0x19,0x04,0x0a,0x7b,0xec,0x09,0x03,0x0d,0xb2,0x06,0xd7,0x2e,0x9a,0x5b,0x0e,0x09,
0x07,0x34,0x89,0x88,0xd5,0xb9,0xb6,0x18,0xa1,0x08,0xed,0x31,0xdb,0x6c,0xf6,0xb2,
0x05,0xb6,0x00,0x10,0xf4,0x11,0x75,0x13,0xbd,0x80,0x06,0xb4,0x51,0xab,0xe9,0xc8,
0x9b,0x8a,0x3d,0xad,0x00,0xc0,0x4b,0x38,0xcf,0x62,0xcb,0x9d,0x98,0x77,0x77,0x8a,
0x4f,0x01,0xff,0x80,0xf9,0x06,0x72,0x5e,0x30,0xed,0x81,0xa5,0xc3,0x99,0xfb,0x53,
0x80,0x7f,0x01,0x3a,0xdd,0x5e,0x0a,0xb5,0xb6,0xbd,0x03,0x89,0xda,0x8a,0x2d,0x9c,
0x4a,0x2c,0x83,0x15,0x28,0x02,0xf9,0xa2,0xfc,0xff,0xec,0x20,0x88,0x27,0x43,0x49,
0xf6,0xe3,0x0c,0xeb,0xe4,0x0f,0xf6,0x5c,0x75,0x05,0x22,0xfd,0x42,0xeb,0xe1,0x89,
0xd6,0xcd,0x80,0xd3,0xfd,0x29,0xd3,0x5a,0x2e,0x29,0x16,0xbd,0x07,0x89,0xd9,0x81,
0xad,0x52,0xd2,0xf8,0x0a,0x8c,0xc8,0x8e,0xc0,0x18,0x09,0x0c,0x06,0xb9,0x8f,0x3f,
0xb2,0xc3,0x51,0x56,0x0d,0x7b,0xb9,0x4b,0x53,0xbe,0xfd,0x16,0x07,0xac,0x38,0xc4,
0xf9,0x28,0xcb,0x16,0x0f,0xf8,0xb7,0x6c,0x59,0xc3,0xff,0x7f,0x3b,0x20,0x22,0x2f,
0x5c,0x5b,0x5d,0xfe,0x3a,0x7c,0x3c,0x3e,0x2b,0x3d,0x2c,0x0c,0x23,0x2a,0xe1,0x9c,
0xfb,0x83,0x2f,0x05,0xfb,0xdc,0xe9,0x58,0x0b,0x9e,0x6b,0x01,0x05,0x1f,0xb7,0x40,
0xa1,0x0f,0x74,0xb7,0x61,0x04,0x23,0x74,0x96,0x5c,0x3d,0x14,0x62,0x6c,0xe5,0x01,
0x2d,0x01,0x6c,0xda,0x07,0x12,0x01,0x4c,0x8e,0x6d,0xb5,0x1d,0xbd,0x18,0x11,0x74,
0x2c,0xb3,0x15,0x4b,0x7b,0x5d,0x02,0x3d,0x03,0x07,0xfe,0x10,0x01,0x80,0xfc,0x4e,
0x60,0xac,0x2c,0x54,0x1c,0x06,0x9d,0x30,0x31,0x57,0x87,0x05,0xf6,0x25,0x07,0x53,
0xf1,0xa5,0xfb,0xd3,0x3f,0xff,0x79,0x7f,0xf6,0x47,0x06,0x08,0x5b,0x75,0xdb,0xad,
0x5b,0x3a,0xc2,0x03,0x9d,0xa8,0xe6,0x16,0x2f,0xdb,0x1e,0x31,0x04,0x89,0xcd,0x3e,
0x43,0x36,0xb7,0x45,0x09,0xa3,0x37,0xfe,0x07,0xe8,0x2c,0x03,0x50,0x9c,0x58,0x5d,
0x35,0x07,0xda,0x04,0x47,0x07,0xe6,0xaa,0x57,0xd2,0x82,0x38,0xf8,0xa3,0x03,0x72,
0x7d,0x12,0x5d,0xfe,0xad,0xf9,0xe8,0xaf,0x03,0x07,0xd4,0x81,0xc5,0x84,0xb8,0xe8,
0x9b,0x04,0x56,0xfb,0x90,0xfb,0x74,0x42,0xe8,0xf6,0x24,0x61,0x33,0xe2,0x5f,0x4d,
0x8b,0x3e,0xa1,0x37,0xd9,0x60,0x8e,0xee,0x8b,0x6a,0xef,0xe8,0xd4,0x02,0x4f,0x61,
0x5b,0xf7,0xe8,0xb9,0x03,0x5a,0x52,0x0f,0xda,0xb6,0x32,0x0a,0xcf,0x45,0x86,0x04,
0xfb,0xeb,0xb8,0xe8,0x99,0x03,0x3f,0x2d,0x96,0x3b,0xd6,0x49,0x38,0xfb,0xe8,0xf2,
0x02,0x50,0xc9,0x6d,0xe3,0x0a,0x6f,0x3c,0x36,0x89,0x47,0x8e,0x08,0x14,0xee,0xf6,
0xc2,0x10,0x9b,0xfb,0x0c,0xff,0xe8,0xe6,0x02,0xcd,0xa5,0x36,0xfd,0xe9,0x11,0x00,
0xf6,0xc1,0x08,0xd8,0x13,0xf8,0xfe,0x16,0xaf,0x02,0xc0,0xe1,0xdc,0xd7,0x1a,0xef,
0x39,0xec,0x04,0x0e,0x3b,0xd8,0x16,0x3d,0xfb,0xa2,0x41,0x1c,0xec,0x3f,0xf9,0xc3,
0x03,0xb7,0xfa,0x31,0x02,0x20,0x6e,0x2c,0xed,0x49,0x07,0x72,0xfd,0x97,0xbb,0x9a,
0x02,0xb5,0x73,0x07,0x28,0x34,0x4b,0x00,0xd8,0xac,0xf8,0x9d,0x2e,0x76,0x0b,0x5c,
0x7c,0x1d,0x82,0x0c,0x66,0x1c,0x35,0xd0,0xb2,0x30,0x8d,0xdb,0x52,0xc7,0x39,0x75,
0x1a,0x74,0x83,0x15,0x20,0x35,0x77,0x3e,0x6e,0x33,0x07,0x3f,0x62,0x8e,0xd8,0x09,
0x3b,0x39,0x5f,0x03,0x1e,0x5b,0x89,0xc7,0xe6,0x4b,0x1d,0xd8,0x1e,0x56,0xf8,0xe8,
0x39,0x03,0x1f,0x46,0x3d,0x8b,0xf9,0xb3,0x8b,0x9b,0x2c,0x16,0x28,0x51,0xe4,0xa1,
0x0a,0x2c,0xa5,0x36,0x0d,0x15,0x3d,0x6e,0xae,0x82,0x01,0x4a,0x61,0x73,0x51,0x72,
0xee,0x01,0x1f,0x34,0x03,0xeb,0xf6,0xa2,0xe8,0x72,0x01,0x49,0xc9,0x47,0x37,0x49,
0x04,0x3e,0xfd,0x8e,0x79,0x8e,0xe7,0x8b,0x9f,0x8b,0x91,0x01,0x09,0x60,0x08,0x42,
0x41,0xb0,0x88,0x3c,0x4b,0x37,0xc8,0xf9,0x00,0x61,0x2e,0xa5,0xdd,0xcd,0x6b,0x01,
0xd5,0x20,0x39,0x7d,0xf7,0x2f,0xe8,0x36,0x84,0x02,0x08,0x7c,0xb4,0x2f,0xe8,0xc1,
0x5f,0xb3,0x4f,0x7c,0x4e,0x51,0x20,0x17,0xee,0xb4,0x1a,0xe9,0xc0,0x53,0x07,0xc1,
0x99,0x21,0x27,0x3d,0x02,0x23,0x38,0x21,0x7e,0x17,0x02,0x1f,0xb8,0x0d,0xa4,0xe1,
0xb9,0x37,0x00,0x19,0x18,0xe8,0x57,0x5c,0xf9,0x64,0xf4,0x00,0x38,0x3a,0x36,0xc6,
0xca,0xc4,0x18,0x4c,0xf3,0x33,0x41,0x78,0x34,0xb5,0x1f,0xcd,0x5e,0x0d,0x9d,0x4f,
0xbc,0x70,0xe8,0x43,0x00,0x5a,0x04,0x12,0x65,0x10,0x88,0x16,0x4b,0x11,0xb2,0x21,
0xd7,0x46,0x8b,0x58,0x48,0x23,0x52,0xc6,0x0a,0xd4,0xd0,0xb2,0x6a,0x1e,0xdd,0xc3,
0x05,0x29,0x2c,0x50,0x5b,0x3a,0x1e,0xf4,0x4b,0x07,0x26,0xf6,0xd7,0x89,0x3b,0x61,
0xfb,0x8c,0xcb,0x8e,0xdb,0xc2,0x52,0xa1,0xdd,0x1c,0xf3,0xcd,0xad,0xff,0xab,0xba,
0x1e,0xb5,0x36,0x6f,0x2c,0x01,0x89,0xf7,0x02,0x53,0x8b,0x74,0x6d,0x1f,0x6a,0xd8,
0x47,0x01,0x12,0xb8,0x81,0x3c,0x26,0x3e,0xda,0x35,0x01,0xd0,0x7d,0x2b,0x09,0x49,
0x3e,0x80,0x27,0x00,0x05,0x06,0x6c,0x56,0x53,0x0b,0x17,0xe8,0xa5,0x8d,0xd2,0xdb,
0xc7,0x06,0x12,0x3d,0x0f,0x3a,0x4d,0xae,0x07,0xa1,0x8d,0x3c,0x9b,0x12,0x68,0xfe,
0x03,0x73,0x02,0x3c,0x12,0xc3,0x07,0x21,0x42,0x97,0xa1,0xe5,0x78,0x55,0xb4,0x59,
0x17,0x51,0xe8,0x63,0x83,0xff,0xa0,0xa8,0x5d,0x56,0xb1,0x5d,0xac,0xc9,0x5b,0x17,
0x50,0x09,0x84,0x62,0x75,0xa0,0xb6,0x11,0x04,0x06,0xdb,0x44,0x0f,0xa2,0xb5,0x2e,
0xdf,0xac,0x24,0x1f,0x8e,0x24,0x35,0x6d,0xd8,0x20,0x81,0xc6,0x97,0x53,0x3e,0x88,
0xbd,0x04,0x1f,0xb6,0x1d,0xa0,0x28,0xfa,0xe8,0xd8,0xff,0x58,0x11,0x68,0x0f,0xa5,
0xb4,0xf4,0x3b,0xe8,0xff,0xfe,0x3d,0x48,0xf8,0xa8,0x11,0x77,0x94,0xc1,0x35,0x14,
0x08,0x97,0xb6,0xb0,0x7d,0x97,0x12,0x74,0x05,0xf8,0x30,0xc0,0xe9,0x18,0x00,0x96,
0xfe,0x05,0xe8,0x41,0x46,0x3b,0xb4,0x3a,0x46,0x16,0x14,0x5e,0x2c,0x40,0xe7,0xc9,
0x13,0x60,0x5c,0x46,0x54,0x5e,0x34,0x0a,0x47,0x4b,0x99,0xfe,0x0f,0xbc,0x16,0x2b,
0x55,0xb4,0xa9,0xfe,0x3b,0xd0,0x58,0xad,0xb0,0xec,0x48,0x5c,0xa5,0x24,0x6b,0xaf,
0x76,0x77,0xb4,0x00,0xb6,0x2e,0x35,0xff,0x05,0xfe,0xc4,0x46,0xeb,0xf4,0x08,0xe4,
0xdc,0x74,0x11,0xbf,0x85,0x81,0xf7,0x5c,0x74,0x09,0x3c,0x6c,0x7d,0x4e,0xfe,0xcc,
0xeb,0xeb,0xad,0x32,0x88,0xd3,0xfc,0xa4,0x91,0x0b,0xc1,0x76,0x75,0xf8,0x42,0x89,
0x1c,0x91,0xc0,0xf3,0xd7,0x5b,0x3e,0x36,0x83,0x05,0x2d,0xff,0x6b,0x29,0x3e,0xbc,
0x06,0x47,0x46,0x41,0x5b,0xe5,0x46,0x16,0x8b,0xb5,0x0d,0xbd,0x80,0x05,0x5c,0x47,
0xc9,0x04,0x9a,0xfd,0xbd,0x0c,0x89,0xf8,0x1d,0xdf,0xc3,0x67,0x30,0x8b,0x76,0x0f,
0xeb,0xc8,0xa4,0x6b,0x15,0x60,0x02,0x00,0x6c,0x83,0xa8,0x3f,0x01,0x30,0x0d,0x4e,
0xab,0x6f,0x78,0x7f,0x70,0x70,0x65,0x6e,0x64,0x0d,0xff,0x0a,0x24,0x0d,0x49,0x6e,
0x76,0x61,0x6c,0xff,0x69,0x64,0x20,0x73,0x77,0x69,0x74,0x63,0xab,0x68,0x92,0x76,
0x2d,0x20,0x13,0xed,0x54,0x6f,0x21,0xfc,0x6d,0x61,0x6e,0x79,0x20,0x70,0x2f,0xe3,
0x61,0x6d,0x65,0xf7,0x74,0x65,0x72,0x73,0x17,0x3a,0x18,0x50,0xc3,0x0f,0xbb,0x20,
0x34,0x75,0x65,0xfb,0x20,0x6e,0x6f,0x74,0x20,0x08,0x7e,0x6c,0x6f,0x77,0x65,0x64,
0xcf,0x20,0x46,0x72,0xfa,0x65,0x65,0x44,0x4f,0x53,0xb0,0xd8,0x7f,0x2e,0x20,0x45,
0x6e,0x61,0x62,0xdb,0x6c,0x65,0x3d,0x70,0xee,0x72,0x6f,0x67,0x3a,0x6d,0x08,0x74,
0xb7,0x59,0x6f,0x7a,0x71,0x20,0x64,0x61,0x2f,0x1b,0x20,0x66,0x69,0x7d,0x1b,0x69,
0xbf,0x0d,0x73,0x70,0x65,0x63,0x69,0x2b,0x45,0xb6,0x64,0x69,0x41,0xdb,0x63,0x24,
0x72,0xbb,0x69,0x18,0x61,0x73,0x6e,0xa0,0x09,0x09,0xdb,0x1f,0x66,0x35,0x76,0x68,
0x65,0x2c,0x0b,0x69,0x5a,0x1f,0xf7,0x31,0x11,0xf6,0x63,0x75,0x72,0x0c,0xec,0x6e,
0x74,0x33,0x9d,0x79,0x2e,0xbb,0x2f,0x0d,0x56,0x20,0x5b,0x76,0x35,0xdd,0x2e,0x30,
0x01,0x36,0xff,0x20,0x28,0x43,0x29,0x20,0x32,0x30,0x30,0xdc,0x34,0x2d,0x04,0xde,
0x0d,0x45,0x64,0x75,0xdb,0xbf,0x64,0x80,0x6d,0x43,0x58,0x6c,0x41,0x6f,0x6c,0xb7,
0x75,0x2b,0x01,0xc9,0x9f,0x49,0x47,0xdb,0x4e,0x55,0x03,0x50,0xb5,0x4c,0x12,0xcd,
0x3d,0x1b,0xb6,0x6f,0x5e,0x32,0xde,0x49,0x0a,0x53,0x79,0xde,0x5b,0x61,0x78,0x3a,
0xe0,0x09,0x08,0xa8,0x3e,0x20,0x5b,0x5b,0x64,0xdf,0x99,0x76,0x65,0x3a,0x5d,0x0a,
0x18,0xda,0x36,0x5b,0xd6,0x0f,0x00,0xed,0x5d,0x5d,0x14,0xea,0x2f,0x58,0x5b,0xea,
0xd5,0x7c,0xbd,0xd1,0x8a,0x0e,0xb0,0xe6,0x6c,0x7c,0x08,0xde,0x15,0xee,0x14,0x45,
0x5d,0x0d,0xcb,0x47,0xbd,0x3b,0x54,0xcc,0x00,0x4e,0x0f,0x20,0x44,0x7b,0x0b,0xf4,
0x5a,0x94,0xcb,0xd0,0x0f,0x2e,0x61,0x08,0xaa,0xb9,0xda,0xec,0x30,0x6a,0xe1,0x5d,
0x14,0x5b,0xcc,0x78,0xb9,0x74,0x16,0x86,0x50,0xed,0x27,0x73,0x65,0xa1,0xdc,0xc0,
0x43,0x36,0xbb,0x16,0x63,0x6f,0xdf,0x6d,0x6d,0x07,0x65,0xb7,0x78,0x48,0x75,0x74,
0x73,0xd1,0x3f,0x25,0xee,0x8f,0x3e,0x1d,0x00,0x6c,0x0e,0x63,0xc1,0x3f,0x6d,0x20,
0x6c,0x8b,0x6c,0x77,0x76,0x71,0x75,0x15,0xc2,0x74,0xa7,0x58,0x46,0x75,0x2e,0x11,
0x87,0x6f,0xa0,0x65,0x66,0x61,0xd9,0x75,0x6c,0x1c,0xb3,0x48,0x66,0x54,0xc3,0xf0,
0x75,0x22,0x53,0x8b,0x84,0xb3,0x04,0x24,0xce,0x36,0x66,0x06,0xb1,0x4e,0x60,0x64,
0x38,0x68,0x61,0xf6,0x3f,0x0f,0xf6,0x61,0x64,0x79,0x62,0x61,0x97,0x63,0x63,0x57,
0x61,0x64,0x05,0xa1,0x20,0x12,0xed,0x2e,0x10,0xe3,0x54,0x68,0x69,0x21,0x9e,0x2a,
0xdb,0x14,0x64,0x7f,0x37,0xe9,0x5b,0x74,0xd2,0x6e,0x90,0x67,0xc2,0x65,0x1b,0x7e,
0xc6,0xc4,0x2e,0x6b,0xec,0x6f,0x66,0x66,0x96,0x96,0x27,0x1d,0x45,0xf7,0x60,0x53,
0x8c,0x59,0x65,0x4e,0xb2,0xa4,0x90,0xa1,0x01,0x12,0x5a,0x96,0x30,0x5d,0xdb,0x1b,
0x76,0x68,0x17,0x58,0x17,0x6d,0xe6,0x61,0xff,0x6e,0x41,0x4c,0x15,0xdb,0x24,0x62,
0x1b,0x6d,0x75,0x82,0x84,0x64,0x33,0xd9,0x2c,0xba,0xd7,0x72,0xc7,0x39,0x76,0x6f,
0xc3,0x63,0x61,0x6e,0xb9,0x80,0x24,0x03,0xf6,0x59,0x6f,0x75,0x3f,0x6d,0x1a,0xa7,
0x6e,0x31,0x65,0xe4,0xa7,0x61,0x73,0xe6,0xae,0x99,0x45,0xd3,0x73,0x5c,0x04,0xba,
0x96,0x8b,0xdd,0x6e,0x22,0x73,0x73,0x75,0x7e,0x86,0x3a,0x02,0xd8,0x20,0x6c,0x66,
0x64,0xc2,0x6f,0xaf,0x78,0x6a,0x40,0x6f,0x37,0xf6,0xb0,0x34,0xc3,0x16,0x5b,0x68,
0x85,0x74,0x48,0xcf,0x1b,0x29,0x52,0x74,0xda,0x6c,0xcd,0xc0,0x47,0x27,0x24,0x0d,
0x20,0x84,0xab,0xde,0xf5,0xd4,0x2f,0xd5,0xf7,0x65,0x82,0x41,0xdb,0xb2,0x72,0x2e,
0xd8,0x6d,0x74,0x76,0x9b,0x44,0x1b,0xbd,0xb8,0x10,0xb7,0xba,0x6e,0x72,0xcd,0x2f,
0xad,0xba,0x6b,0x05,0x1e,0x7a,0x80,0xfa,0x05,0x97,0xb2,0x80,0xfe,0x6f,0x09,0x0a,
0xba,0x54,0x82,0x12,0x70,0xc5,0x6e,0x90,0xba,0x38,0xc7,0x09,0xb8,0x01,0xb4,0x4c,
0x04,0x4a,0x5a,0x26,0x07,0x8b,0x55,0x9b,0xe2,0x72,0x5d,0x4f,0xeb,0xee,0x5b,0x34,
0xbe,0xc0,0x80,0x00,0xa0,0xbe,0xdd,0x73,0x0c,0x46,0x0b,0xcd,0xf0,0xc4,0x72,0xdc,
0x3b,0x18,0x14,0x77,0xb4,0x49,0x2e,0x66,0x2f,0x35,0xb5,0xc0,0x28,0x5b,0x49,0xa3,
0xdb,0xa2,0x05,0x0d,0x25,0xee,0xba,0xae,0x05,0x15,0x93,0x21,0x13,0xbc,0x76,0xa3,
0x27,0x07,0x0d,0xb7,0x15,0x57,0x07,0x28,0x07,0x03,0xe2,0xba,0x47,0x12,0x17,0x45,
0xea,0xb8,0x6e,0x4f,0xcd,0x21,0x00,0x00,0x00,0x00,0x00,0x09,0xff,0xa4,0x00,0xff,
0x75,0x03,0xe8,0x6a,0x00,0x72,0xf6,0x41,0x8c,0xc0,0xe8,0x55,0x00,0xe3,0x66,0x73,
0xf9,0x49,0x49,0x74,0x11,0x01,0xc9,0x01,0xc9,0x01,0xc9,0x01,0xc9,0x89,0xcd,0x8a,
0x1c,0x46,0xf6,0xd3,0x31,0xc9,0xe8,0x39,0x00,0x11,0xc9,0x75,0x08,0x41,0xe8,0x31,
0x00,0x73,0xfb,0x41,0x41,0x81,0xfd,0xd1,0x00,0x83,0xd9,0xfe,0x29,0xe8,0x72,0x0e,
0x8e,0xd8,0x8d,0x01,0x28,0xfc,0x96,0xf3,0xa4,0x96,0x8e,0xda,0xeb,0xb0,0xd1,0xe0,
0xd1,0xe0,0xd1,0xe0,0xd1,0xe0,0x50,0x31,0xc0,0x8e,0xd8,0x58,0x01,0xd8,0x01,0xf8,
0xeb,0xe2,0x00,0xff,0x75,0x03,0xe8,0x06,0x00,0x11,0xc9,0x00,0xff,0x75,0x05,0x8a,
0x3c,0x46,0x10,0xff,0xc3,0x5d,0x07,0x06,0x1f,0x8d,0x86,0xf0,0xff,0x8e,0xd0,0xea,
0x70,0x12,0xf0,0xff,0xf0,0xff,0x20,0x00,0x20,0x00,0x37};

struct BuiltinFileBlob bfb_APPEND_EXE = {
	/*recommended file name*/	"APPEND.EXE",
	/*data*/			bin_append_exe,
	/*length*/			sizeof(bin_append_exe)
};

