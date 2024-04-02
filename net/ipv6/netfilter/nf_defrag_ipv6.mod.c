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
	{ 0xe6d4cc41, "inet_frag_kill" },
	{ 0x2d008a32, "pskb_trim_rcsum_slow" },
	{ 0x4af935d8, "ip6_expire_frag_queue" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xc2189066, "inet_frag_find" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0x2b87aa6b, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x8facfd69, "inet_frags_fini" },
	{ 0xb9b4d921, "inet_frags_exit_net" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xed946a48, "init_net" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x31d67905, "nf_register_net_hooks" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x55d140d0, "inet_frag_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xceee90d1, "ip6_frag_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5db88162, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c113946, "inet_frags_init" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x509f625d, "consume_skb" },
	{ 0x467ba543, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xe8ecd68d, "skb_morph" },
	{ 0xded390c0, "ip6_rhash_params" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B2E20BDD8B9079EB6CA19E4");
MODULE_INFO(rhelversion, "8.0");
