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
	{ 0xec815b6c, "netlink_kernel_release" },
	{ 0xc4459bca, "__netlink_kernel_create" },
	{ 0xed946a48, "init_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
	{ 0x10d92516, "crypto_alg_mod_lookup" },
	{ 0x53e61b63, "crypto_unregister_instance" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0xc5b8e721, "crypto_mod_put" },
	{ 0x85142f62, "up_write" },
	{ 0x46fe821d, "crypto_remove_spawns" },
	{ 0x65baf559, "down_write" },
	{ 0xa916b694, "strnlen" },
	{ 0xea2b701b, "up_read" },
	{ 0x8b680c3f, "crypto_mod_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0x91185511, "down_read" },
	{ 0x4e18ccc, "crypto_alg_sem" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0x3556424b, "netlink_capable" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x86bb9aa3, "netlink_rcv_skb" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C776141CA51A3ADC33E8775");
MODULE_INFO(rhelversion, "8.0");
