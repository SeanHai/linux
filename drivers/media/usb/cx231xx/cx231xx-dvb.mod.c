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
	{ 0x6b751e35, "cx231xx_unregister_extension" },
	{ 0x38a01e05, "cx231xx_register_extension" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0x27e1a049, "printk" },
	{ 0x402b8281, "__request_module" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xe6478472, "_dev_info" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x88f31ace, "dvb_module_probe" },
	{ 0xd83b4ca9, "cx231xx_demod_reset" },
	{ 0x7a9cf594, "cx231xx_get_i2c_adap" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xa767e04d, "cx231xx_init_isoc" },
	{ 0x4ed01f13, "cx231xx_init_bulk" },
	{ 0x2d425b92, "cx231xx_set_alt_setting" },
	{ 0xbe82b394, "cx231xx_uninit_isoc" },
	{ 0x9a926ccb, "cx231xx_uninit_bulk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe1887eed, "dvb_module_release" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x6f395115, "cx231xx_set_mode" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,dvb-core";


MODULE_INFO(srcversion, "34A9DA1F6B8D577F33C6AF2");
MODULE_INFO(rhelversion, "8.0");
