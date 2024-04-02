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
	{ 0xa1d0590c, "scsi_set_medium_removal" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf03b8cb9, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x28139592, "cdrom_number_of_slots" },
	{ 0x843316af, "scsi_ioctl_block_when_processing_errors" },
	{ 0x25bfa570, "unregister_cdrom" },
	{ 0x94095fd1, "blk_dump_rq_flags" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x19d4804, "cdrom_open" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0xb98cf1d0, "scsi_autopm_get_device" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x257750f1, "check_disk_change" },
	{ 0x91c1c961, "cdrom_release" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x7d82f045, "__scsi_execute" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x7f1e9373, "cdrom_get_media_event" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x806f7645, "cdrom_check_events" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x65a78040, "cdrom_get_last_written" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd79b1308, "scsi_ioctl" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x2a71a178, "scsi_register_driver" },
	{ 0xf8bd7348, "scsi_block_when_processing_errors" },
	{ 0x8d6d3c23, "scsi_test_unit_ready" },
	{ 0xc94c8af2, "scsi_init_io" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2194e490, "cdrom_ioctl" },
	{ 0xdcea4dd7, "blk_pm_runtime_init" },
	{ 0x5c900b0b, "register_cdrom" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x884bb40c, "scsi_device_get" },
	{ 0xf787ef43, "scsi_autopm_put_device" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0xc3ae7593, "scsi_mode_sense" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "9B3F00F6E83056C25E477F5");
MODULE_INFO(rhelversion, "8.0");
