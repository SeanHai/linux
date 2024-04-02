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
	{ 0xea7bc40d, "tm6000_unregister_extension" },
	{ 0x2028684a, "tm6000_register_extension" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x402b8281, "__request_module" },
	{ 0xdff8e89d, "tm6000_tuner_callback" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x2309a6d6, "tm6000_xc5000_callback" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xaf639c6f, "tm6000_init_digital_mode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x89b611dd, "tm6000_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x27e1a049, "printk" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tm6000,dvb-core";


MODULE_INFO(srcversion, "325AA2B54AE27D8D4DB71DE");
MODULE_INFO(rhelversion, "8.0");
