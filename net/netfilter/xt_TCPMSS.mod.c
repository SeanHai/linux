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
	{ 0x8e91f949, "xt_unregister_targets" },
	{ 0x77a0f6e, "xt_register_targets" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xde6bbe73, "ipv6_skip_exthdr" },
	{ 0x27e1a049, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb0e602eb, "memmove" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xd1f0de11, "inet_proto_csum_replace4" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37b82323, "nf_route" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1C8E3EBFFFF63A6DCCD7C9E");
MODULE_INFO(rhelversion, "8.0");
