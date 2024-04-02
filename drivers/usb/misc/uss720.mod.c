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
	{ 0xa274f52b, "parport_ieee1284_read_byte" },
	{ 0x1323d580, "parport_ieee1284_read_nibble" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xb683a3ad, "parport_announce_port" },
	{ 0x75aea49c, "usb_find_common_endpoints_reverse" },
	{ 0x6259c6f1, "parport_register_port" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xf7d6636f, "current_task" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x27e1a049, "printk" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xda28feb0, "parport_put_port" },
	{ 0xcaba6cc4, "parport_remove_port" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x4d2a941b, "parport_ieee1284_interrupt" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x29361773, "complete" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xb348a850, "ex_handler_refcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

MODULE_ALIAS("usb:v047Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06C6p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0729p1284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1293p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AB72BF449025C34AF2A7AC5");
MODULE_INFO(rhelversion, "8.0");
