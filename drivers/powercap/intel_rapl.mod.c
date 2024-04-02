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
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xe4ba049, "__cpuhp_remove_state" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0x357c35cd, "powercap_register_control_type" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8cbaa57, "powercap_register_zone" },
	{ 0x28318305, "snprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x177847e, "cpu_info" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3a8f8b1e, "powercap_unregister_control_type" },
	{ 0x17d254e8, "powercap_unregister_zone" },
	{ 0x37a0cba, "kfree" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x27e1a049, "printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa5e55057, "rdmsrl_safe_on_cpu" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0045:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0046:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0047:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0056:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0066:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0037:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0057:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0085:feature:*");

MODULE_INFO(srcversion, "2A5B7F179E0E77E48928140");
MODULE_INFO(rhelversion, "8.0");
