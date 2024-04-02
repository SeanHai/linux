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
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc14a1c1a, "s5h1420_get_tuner_i2c_adapter" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xc88449e3, "cx24113_agc_callback" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x9ee5a74d, "cx24123_get_tuner_i2c_adapter" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x6a404590, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=s5h1420,dvb-core,cx24113,cx24123";


MODULE_INFO(srcversion, "3ACF2A94C90163D5B9EA880");
MODULE_INFO(rhelversion, "8.0");
