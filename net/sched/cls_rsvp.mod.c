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
	{ 0x1f50dde, "unregister_tcf_proto_ops" },
	{ 0xf7f409c6, "register_tcf_proto_ops" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x3a918037, "tcf_exts_change" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x5fda775f, "tcf_exts_validate" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x55339c0c, "tcf_exts_dump_stats" },
	{ 0xa1795a14, "tcf_exts_dump" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x3a574bfa, "tcf_action_exec" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xbb00e8ed, "tcf_queue_work" },
	{ 0xe7486c43, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x15f4e29a, "tcf_exts_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DAED0FC7AD1D1617D02C12F");
MODULE_INFO(rhelversion, "8.0");
