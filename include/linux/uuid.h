#include <linux/device.h>

struct hd_struct;
struct block_device;

int part_matches_uuid(struct hd_struct *part, const char *uuid);
dev_t blk_lookup_uuid(const char *uuid);
int uuid_from_block_dev(struct block_device *bdev, char *uuid);
