/* THIS FILE IS GENERATED, DO NOT EDIT! */

const firmware_crc_block_t firmware_100a_crc32[]={
    { (const char *)0xff010000,   0x623aac, 0x3d1cee5e },
    { (const char *)0xff8642f4,    0x31d30, 0x41eb872c },
    { (const char *)0xff84d238,    0x170bc, 0x9c3d8e8e },
};

firmware_crc_sub_t firmware_crc_list[]={
    { "GM1.00A", firmware_100a_crc32 },
};

const firmware_crc_desc_t firmware_crc_desc={
    (const char *)0xff0aaf99, // firmware_ver_ptr
    firmware_crc_list,
    1,  // sub_count
    3,  // block_count
};
