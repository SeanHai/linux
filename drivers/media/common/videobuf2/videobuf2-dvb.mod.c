#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb2331ebe, "vb2_thread_start" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xc75af1f9, "vb2_thread_stop" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0xca72a3cb, "vb2_plane_vaddr" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a404590, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,videobuf2-common";


MODULE_INFO(srcversion, "33FB1047FDB99028D8469B6");
MODULE_INFO(rhelversion, "8.0");
