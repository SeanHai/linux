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
	{ 0xfc33ccad, "dst_release" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xeae3f506, "ip6_route_output_flags" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x25ed0a67, "__pskb_copy_fclone" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x37a0cba, "kfree" },
	{ 0x897e956d, "ip6_local_out" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F174F619182449EA08BA235");
MODULE_INFO(rhelversion, "8.0");
