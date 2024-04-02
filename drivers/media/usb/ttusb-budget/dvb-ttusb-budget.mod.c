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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x402b8281, "__request_module" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("usb:v0B48p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FB0F906A79C18938D0FC270");
MODULE_INFO(rhelversion, "8.0");
