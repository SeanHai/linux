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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x3aebab2a, "netlink_has_listeners" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x224be247, "nlmsg_notify" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xec815b6c, "netlink_kernel_release" },
	{ 0x86bb9aa3, "netlink_rcv_skb" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1c778bab, "netlink_ack" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x9cc4f393, "netlink_set_err" },
	{ 0xc4459bca, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xcdc4e378, "netlink_net_capable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "76802853815C779087243E1");
MODULE_INFO(rhelversion, "8.0");
