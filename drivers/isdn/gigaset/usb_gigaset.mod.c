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
	{ 0xecba9d10, "gigaset_m10x_input" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x94ddc4bd, "gigaset_shutdown" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x4b271150, "gigaset_stop" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xa1cb916d, "gigaset_freedriver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdbf7900b, "gigaset_initdriver" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x1c5d1717, "gigaset_blockdriver" },
	{ 0x4b8a88fc, "gigaset_initcs" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x61e27a0e, "gigaset_skb_sent" },
	{ 0xd3dcfb16, "gigaset_freecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9d589295, "gigaset_add_event" },
	{ 0x4ae9b3cc, "gigaset_fill_inbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xa3151853, "gigaset_dbg_buffer" },
	{ 0xe5a06dd, "gigaset_start" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xda723b50, "gigaset_m10x_send_skb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gigaset";

MODULE_ALIAS("usb:v0681p0009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B073D5BBCFE865D7932EDF9");
MODULE_INFO(rhelversion, "8.0");
