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
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4dc10399, "snd_i2c_device_create" },
	{ 0xcd406d25, "snd_i2c_sendbytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x27e1a049, "printk" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x87457977, "snd_i2c_device_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x71229bf8, "snd_i2c_readbytes" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xae307d4b, "snd_ctl_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-i2c,snd";


MODULE_INFO(srcversion, "F1942C836986E8E13A8EA12");
MODULE_INFO(rhelversion, "8.0");
