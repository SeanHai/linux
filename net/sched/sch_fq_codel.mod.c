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
	{ 0xdd926335, "unregister_qdisc" },
	{ 0x69f77094, "register_qdisc" },
	{ 0xfc3fcb39, "gnet_stats_copy_queue" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0xdf4ea6d5, "tcf_block_get" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9aff43a2, "gnet_stats_copy_app" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x183a470e, "__skb_get_hash" },
	{ 0xff68a52f, "qdisc_tree_reduce_backlog" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9aecbb9f, "tcf_classify" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xfb578fc5, "memset" },
	{ 0x66733015, "rtnl_kfree_skbs" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x903c34cc, "tcf_block_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "29F1CBAC8B68332B919BD92");
MODULE_INFO(rhelversion, "8.0");
