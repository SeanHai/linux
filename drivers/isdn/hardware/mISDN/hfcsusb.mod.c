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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x9fc1b3b0, "get_next_bframe" },
	{ 0xfb902c27, "get_next_dframe" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x762b3390, "recv_Echannel" },
	{ 0xe70fad6, "recv_Bchannel" },
	{ 0x1372c765, "recv_Dchannel" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd101e2f6, "bchannel_get_rxbuf" },
	{ 0xbb676138, "create_l1" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x21c97b98, "queue_ch_frame" },
	{ 0xe367c99, "dchannel_senddata" },
	{ 0xabd43862, "bchannel_senddata" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xbe48a613, "mISDN_ctrl_bchannel" },
	{ 0x433175d7, "mISDN_clear_bchannel" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x5eeee198, "mISDN_register_device" },
	{ 0x28318305, "snprintf" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd98d9204, "mISDN_initbchannel" },
	{ 0x7cb5bd6d, "mISDN_initdchannel" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x68e63115, "mISDN_freedchannel" },
	{ 0xad3ea97, "mISDN_freebchannel" },
	{ 0x1497ce1b, "mISDN_unregister_device" },
	{ 0x588886a6, "l1_event" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x509f625d, "consume_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x27e1a049, "printk" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x58388972, "pv_lock_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";

MODULE_ALIAS("usb:v0959p2BD0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p1688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0846d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0847d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Dp1005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p0525d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BAD7387089DE26C0EDB965D");
MODULE_INFO(rhelversion, "8.0");
