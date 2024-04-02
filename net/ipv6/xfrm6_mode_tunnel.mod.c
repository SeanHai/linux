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
	{ 0xc6bc30cc, "xfrm6_prepare_output" },
	{ 0x31e49087, "xfrm_prepare_input" },
	{ 0x52521b71, "xfrm_unregister_mode" },
	{ 0xf3d4b394, "xfrm_register_mode" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x6fcde61c, "ip6_dst_hoplimit" },
	{ 0x864f75c, "skb_mac_gso_segment" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C2DB835BA924246D6F5D9C2");
MODULE_INFO(rhelversion, "8.0");
