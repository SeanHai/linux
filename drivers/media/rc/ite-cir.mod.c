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
	{ 0xa6106129, "param_ops_long" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xbadf500d, "pnp_unregister_driver" },
	{ 0x22c8110d, "pnp_register_driver" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5eba9410, "__request_region" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd5c7e620, "pnp_get_resource" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x534ad7af, "ir_raw_event_handle" },
	{ 0x96c3c8b, "ir_raw_event_store_with_filter" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37a0cba, "kfree" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x27e1a049, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("pnp:dITE8704*");
MODULE_ALIAS("acpi*:ITE8704:*");
MODULE_ALIAS("pnp:dITE8713*");
MODULE_ALIAS("acpi*:ITE8713:*");
MODULE_ALIAS("pnp:dITE8708*");
MODULE_ALIAS("acpi*:ITE8708:*");
MODULE_ALIAS("pnp:dITE8709*");
MODULE_ALIAS("acpi*:ITE8709:*");

MODULE_INFO(srcversion, "A5A05CC620F24E69213B53F");
MODULE_INFO(rhelversion, "8.0");
