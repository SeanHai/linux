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
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xe0b09901, "usb_stor_adjust_quirks" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x4d7d976d, "blk_queue_update_dma_alignment" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xa3294ca4, "usb_lock_device_for_reset" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9f4a4cdf, "scsi_report_bus_reset" },
	{ 0xa6f1c913, "usb_alloc_streams" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xf04de715, "usb_get_urb" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x337bba2d, "scsi_print_command" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x317a8ad6, "flush_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa2baddaf, "usb_free_streams" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");

MODULE_INFO(srcversion, "076BF6F4EF6697FF5B21B2D");
MODULE_INFO(rhelversion, "8.0");
