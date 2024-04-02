#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xa1d0590c, "scsi_set_medium_removal" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf03b8cb9, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x30715a0a, "t10_pi_type1_ip" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0x25292ed6, "t10_pi_prepare" },
	{ 0x843316af, "scsi_ioctl_block_when_processing_errors" },
	{ 0xd9846e51, "blk_queue_io_min" },
	{ 0x9300507b, "mempool_destroy" },
	{ 0x6d410cb2, "scsi_mode_select" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8f103d28, "blk_queue_max_write_zeroes_sectors" },
	{ 0x6befd9d5, "blk_queue_alignment_offset" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x898ec6cf, "revalidate_disk" },
	{ 0xe2d5a545, "scsi_cmd_blk_ioctl" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb98cf1d0, "scsi_autopm_get_device" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x91018733, "device_del" },
	{ 0x257750f1, "check_disk_change" },
	{ 0x27e1a049, "printk" },
	{ 0x3c87b9a5, "blk_queue_max_discard_sectors" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x7d82f045, "__scsi_execute" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x7641fe8d, "blk_register_region" },
	{ 0x49732214, "scsi_report_opcode" },
	{ 0x5a921311, "strncmp" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x2e3adc73, "t10_pi_complete" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2ea111e, "scsi_driverbyte_string" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x48a91171, "string_get_size" },
	{ 0xcca62a76, "device_add" },
	{ 0x466c9ad3, "__class_register" },
	{ 0xcaf2c603, "scsi_sd_pm_domain" },
	{ 0x4ab1096a, "t10_pi_type3_ip" },
	{ 0x5d550c4d, "scsi_sd_probe_domain" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xf32cdec6, "t10_pi_type3_crc" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0x3d573a2e, "async_schedule_domain" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0xc6cbbc89, "capable" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0xd0c86c05, "put_device" },
	{ 0x1eb86738, "blk_queue_physical_block_size" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x13fd787a, "scsi_verify_blk_ioctl" },
	{ 0xd79b1308, "scsi_ioctl" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x6a244503, "mempool_create" },
	{ 0x2a71a178, "scsi_register_driver" },
	{ 0xf8bd7348, "scsi_block_when_processing_errors" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8d6d3c23, "scsi_test_unit_ready" },
	{ 0xd855d813, "scsi_device_set_state" },
	{ 0xc94c8af2, "scsi_init_io" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb3d2c76d, "scsi_hostbyte_string" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x74b55fe, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x496b2196, "scsi_command_normalize_sense" },
	{ 0x85ffabba, "get_device" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x14a3c7a8, "scsicam_bios_param" },
	{ 0x8edb4c42, "blk_queue_write_cache" },
	{ 0x9a983107, "ida_remove" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xbee47fcd, "t10_pi_type1_crc" },
	{ 0x44e60b26, "ida_pre_get" },
	{ 0x551be51f, "device_initialize" },
	{ 0x6d8c812e, "scsi_get_vpd_page" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x15af7f4, "system_state" },
	{ 0xdcea4dd7, "blk_pm_runtime_init" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0xb0e602eb, "memmove" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x884bb40c, "scsi_device_get" },
	{ 0xf787ef43, "scsi_autopm_put_device" },
	{ 0x9fed5c45, "ida_get_new_above" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0xc3ae7593, "scsi_mode_sense" },
	{ 0xaae6569a, "blk_queue_max_write_same_sectors" },
	{ 0x8c255f0f, "blk_integrity_register" },
	{ 0xd3c4d6d4, "scsi_print_sense_hdr" },
	{ 0x2c2cd7f7, "set_disk_ro" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F3DA7B43036315489BCB89C");
MODULE_INFO(rhelversion, "8.0");
