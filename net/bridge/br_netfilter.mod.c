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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x2d008a32, "pskb_trim_rcsum_slow" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x83e6163e, "ip_do_fragment" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x9bb44688, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xbb2eee4, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9b244d41, "nf_hook_slow" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27641934, "br_dev_queue_push_xmit" },
	{ 0x27e1a049, "printk" },
	{ 0x2b87aa6b, "nf_unregister_net_hooks" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x5def83f9, "skb_push" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xed946a48, "init_net" },
	{ 0xb84c2a1a, "br_forward_finish" },
	{ 0x85a41106, "ip_route_input_noref" },
	{ 0xfdf6be0b, "nf_ipv6_ops" },
	{ 0x31d67905, "nf_register_net_hooks" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdfa89d8, "skb_pull_rcsum" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0xf788d115, "nf_br_ops" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37993819, "br_handle_frame_finish" },
	{ 0x467ba543, "register_net_sysctl" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";


MODULE_INFO(srcversion, "0B1950DAE90461FC5C0BEB7");
MODULE_INFO(rhelversion, "8.0");
