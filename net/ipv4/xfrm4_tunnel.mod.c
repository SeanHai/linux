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
	{ 0xace33b95, "xfrm4_tunnel_deregister" },
	{ 0xab6172c, "xfrm_unregister_type" },
	{ 0x3d0508b4, "xfrm4_tunnel_register" },
	{ 0x27e1a049, "printk" },
	{ 0xb0c53c85, "xfrm_register_type" },
	{ 0x5def83f9, "skb_push" },
	{ 0x80390095, "xfrm_input" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "BE38A7F5AB1543CF3B8EFAF");
MODULE_INFO(rhelversion, "8.0");
