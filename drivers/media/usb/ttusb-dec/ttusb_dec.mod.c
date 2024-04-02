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
	{ 0xe78bfacd, "crc32_le" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x28318305, "snprintf" },
	{ 0xa991a672, "ttusbdecfe_dvbs_attach" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x8256a7b8, "ttusbdecfe_dvbt_attach" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfb578fc5, "memset" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfe7843b, "input_event" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x27e1a049, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ttusbdecfe,dvb-core";

MODULE_ALIAS("usb:v0B48p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BDFEC5AF6745B03FA8D3FDA");
MODULE_INFO(rhelversion, "8.0");
